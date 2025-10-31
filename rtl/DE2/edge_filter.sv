`timescale 1ns/1ps
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */

module edge_filter #(
    parameter int IMG_W = 640,
    parameter int IMG_H = 480
)(
    input  logic        clk,
    input  logic        rst,
    input  logic [3:0]  pixel_in,   // 4-bit grayscale input
    output logic [3:0]  pixel_out,  // 4-bit edge output
    input  logic        in_ready,
    output logic        out_ready
);

    // ---------------------------------------------------------
    //  Line buffers to store previous 4 rows
    // ---------------------------------------------------------
    logic [3:0] line0 [0:IMG_W-1];
    logic [3:0] line1 [0:IMG_W-1];
    logic [3:0] line2 [0:IMG_W-1];
    logic [3:0] line3 [0:IMG_W-1];
    logic [$clog2(IMG_W)-1:0] col;

    // ---------------------------------------------------------
    //  Horizontal shift registers for 5×5 window
    // ---------------------------------------------------------
    logic [3:0] shift_0 [4:0];
    logic [3:0] shift_1 [4:0];
    logic [3:0] shift_2 [4:0];
    logic [3:0] shift_3 [4:0];
    logic [3:0] shift_4 [4:0];

	
    // ---------------------------------------------------------
    //  Sequential logic — update buffers and window
    // ---------------------------------------------------------
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            col <= 0;
            for (int i = 0; i < IMG_W; i++) begin
                line0[i] <= 0;
                line1[i] <= 0;
                line2[i] <= 0;
                line3[i] <= 0;
            end
            for (int j = 0; j < 5; j++) begin
                shift_0[j] <= 0;
                shift_1[j] <= 0;
                shift_2[j] <= 0;
                shift_3[j] <= 0;
                shift_4[j] <= 0;
            end
        end else if (in_ready) begin
            // -------------------------------------------------
            //  Shift horizontally (5-pixel window per row)
            // -------------------------------------------------
            shift_0[0] <= shift_0[1];
            shift_0[1] <= shift_0[2];
            shift_0[2] <= shift_0[3];
            shift_0[3] <= shift_0[4];
            shift_0[4] <= line0[col];

            shift_1[0] <= shift_1[1];
            shift_1[1] <= shift_1[2];
            shift_1[2] <= shift_1[3];
            shift_1[3] <= shift_1[4];
            shift_1[4] <= line1[col];

            shift_2[0] <= shift_2[1];
            shift_2[1] <= shift_2[2];
            shift_2[2] <= shift_2[3];
            shift_2[3] <= shift_2[4];
            shift_2[4] <= line2[col];

            shift_3[0] <= shift_3[1];
            shift_3[1] <= shift_3[2];
            shift_3[2] <= shift_3[3];
            shift_3[3] <= shift_3[4];
            shift_3[4] <= line3[col];

            shift_4[0] <= shift_4[1];
            shift_4[1] <= shift_4[2];
            shift_4[2] <= shift_4[3];
            shift_4[3] <= shift_4[4];
            shift_4[4] <= pixel_in;

            // -------------------------------------------------
            //  Update line buffers
            // -------------------------------------------------
            line0[col] <= line1[col];
            line1[col] <= line2[col];
            line2[col] <= line3[col];
            line3[col] <= pixel_in;

            // -------------------------------------------------
            //  Advance column pointer
            // -------------------------------------------------
            if (col == IMG_W - 1)
                col <= 0;
            else
                col <= col + 1;

        end
    end

// ---------- supporting signals ----------
logic  valid_s1, valid_s2, valid_s3, valid_s4; // one valid bit per pipeline stage

// ---------------------------------------------------------
//  Internal signals
// ---------------------------------------------------------
logic [12:0] uns_mag;

// use explicit col width
logic signed [15:0] gx_s1 [0:24];
logic signed [15:0] gy_s1 [0:24];

logic signed [16:0] gx_s2 [0:4];
logic signed [16:0] gy_s2 [0:4];

logic signed [17:0] gx_s3, gy_s3;
logic signed [18:0] mag_s4;

// ---------- valid pipeline ----------
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        valid_s1 <= 0; valid_s2 <= 0; valid_s3 <= 0; valid_s4 <= 0;
    end else begin
        // stage 0 -> stage1 valid: when we accept pixel_in
        valid_s1 <= in_ready;
        valid_s2 <= valid_s1;
        valid_s3 <= valid_s2;
        valid_s4 <= valid_s3;
    end
end

// ---------- Stage1: apply kernel weights (register the weighted terms) ----------
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        for (int i=0;i<25;i++) begin
            gx_s1[i] <= 0;
            gy_s1[i] <= 0;
        end
    end else if (valid_s1) begin
        // map the 5x5 window to indices row-major:
        gx_s1[0]  <= -1*shift_0[0];  gx_s1[1]  <= -2*shift_0[1];  gx_s1[2]  <=  0*shift_0[2];
        gx_s1[3]  <=  2*shift_0[3];  gx_s1[4]  <=  1*shift_0[4];

        gx_s1[5]  <= -4*shift_1[0];  gx_s1[6]  <= -8*shift_1[1];  gx_s1[7]  <=  0*shift_1[2];
        gx_s1[8]  <=  8*shift_1[3];  gx_s1[9]  <=  4*shift_1[4];

        gx_s1[10] <= -6*shift_2[0];  gx_s1[11] <= -12*shift_2[1]; gx_s1[12] <= 0*shift_2[2];
        gx_s1[13] <=  12*shift_2[3]; gx_s1[14] <=  6*shift_2[4];

        gx_s1[15] <= -4*shift_3[0];  gx_s1[16] <= -8*shift_3[1];  gx_s1[17] <= 0*shift_3[2];
        gx_s1[18] <=  8*shift_3[3];  gx_s1[19] <=  4*shift_3[4];

        gx_s1[20] <= -1*shift_4[0];  gx_s1[21] <= -2*shift_4[1];  gx_s1[22] <= 0*shift_4[2];
        gx_s1[23] <=  2*shift_4[3];  gx_s1[24] <=  1*shift_4[4];

        // --- GY ---
        gy_s1[0]  <= -1*shift_0[0];  gy_s1[1]  <= -2*shift_0[1];  gy_s1[2]  <=  2*shift_0[3];
        gy_s1[3]  <=  1*shift_0[4];  gy_s1[4]  <= -4*shift_1[0]; // keep consistent mapping example
        
        gy_s1[5] <= -2*shift_0[1];  gy_s1[6]  <= -8*shift_1[1];  gy_s1[7]  <= -12*shift_2[1];
        gy_s1[8] <= -8*shift_3[1];  gy_s1[9]  <= -2*shift_4[1];
        
        gy_s1[10] <=  2*shift_0[3];  gy_s1[11] <=  8*shift_1[3];  gy_s1[12] <=  12*shift_2[3];
        gy_s1[13] <=  8*shift_3[3];  gy_s1[14] <=  2*shift_4[3];
        
        gy_s1[15] <=  1*shift_0[4];  gy_s1[16] <=  4*shift_1[4];  gy_s1[17] <=  6*shift_2[4];
        gy_s1[18] <=  4*shift_3[4];  gy_s1[19] <=  1*shift_4[4];

        gy_s1[20] <= -1*shift_4[0];  gy_s1[21] <= -2*shift_4[1];  gy_s1[22] <=  0;
        gy_s1[23] <=  2*shift_4[3];  gy_s1[24] <=  1*shift_4[4];
    end
end

// ---------- Stage2: row partial sums (one cycle) ----------
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        for (int i=0;i<5;i++) begin
            gx_s2[i] <= 0;
            gy_s2[i] <= 0;
        end
    end else if (valid_s2) begin
        // row0 partial
        gx_s2[0] <= gx_s1[0] + gx_s1[1] + gx_s1[3] + gx_s1[4];
        gx_s2[1] <= gx_s1[5] + gx_s1[6] + gx_s1[8] + gx_s1[9];
        gx_s2[2] <= gx_s1[10] + gx_s1[11] + gx_s1[13] + gx_s1[14];
        gx_s2[3] <= gx_s1[15] + gx_s1[16] + gx_s1[18] + gx_s1[19];
        gx_s2[4] <= gx_s1[20] + gx_s1[21] + gx_s1[23] + gx_s1[24];

        // gy row sums (all five rows)
        gy_s2[0] <= gy_s1[0] + gy_s1[1] + gy_s1[2] + gy_s1[3] + gy_s1[4];
        gy_s2[1] <= gy_s1[5] + gy_s1[6] + gy_s1[7] + gy_s1[8] + gy_s1[9];
        gy_s2[2] <= gy_s1[10] + gy_s1[11] + gy_s1[12] + gy_s1[13] + gy_s1[14];
        gy_s2[3] <= gy_s1[15] + gy_s1[16] + gy_s1[17] + gy_s1[18] + gy_s1[19];
        gy_s2[4] <= gy_s1[20] + gy_s1[21] + gy_s1[22] + gy_s1[23] + gy_s1[24];
    end
end

// ---------- Stage3: reduce row partials into final gx,gy (single-cycle sum) ----------
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        gx_s3 <= 0;
        gy_s3 <= 0;
    end else if (valid_s3) begin
        // compute the sum for this pixel (no accumulating across cycles)
        gx_s3 <= gx_s2[0] + gx_s2[1] + gx_s2[2] + gx_s2[3] + gx_s2[4];
        gy_s3 <= gy_s2[0] + gy_s2[1] + gy_s2[2] + gy_s2[3] + gy_s2[4];
    end
end

// ---------- Stage4: magnitude (|gx| + |gy|) ----------
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        mag_s4 <= 0;
    end else if (valid_s4) begin
        mag_s4 <= $signed(gx_s3) + $signed(gy_s3); // L1 magnitude approx
    end
end

// ---------- output scaling & out_ready ----------
assign uns_mag   = $unsigned(mag_s4);        // ensure width large enough
assign pixel_out = uns_mag[11:8];            // adjust slice as needed
assign out_ready = valid_s4;

endmodule
