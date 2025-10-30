`timescale 1ns/1ps
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */

module edge_filter #(
    parameter int IMG_W = 638,
    parameter int IMG_H = 478
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

    // ---------------------------------------------------------
    //  Horizontal shift registers for 5×5 window
    // ---------------------------------------------------------
    logic [3:0] shift_0 [4:0];
    logic [3:0] shift_1 [4:0];
    logic [3:0] shift_2 [4:0];
    logic [3:0] shift_3 [4:0];
    logic [3:0] shift_4 [4:0];

    // ---------------------------------------------------------
    //  Internal signals
    // ---------------------------------------------------------
    integer col;
    logic signed [11:0] gx, gy;
    logic signed [12:0] mag;
    logic [12:0] uns_mag;
    logic [6:0] ready_shift;
	 
	 
	 
	 always_ff @(posedge clk or posedge rst) begin
		 if (rst)
			 ready_shift <= '0;
		 else
			 ready_shift <= {ready_shift[5:0], in_ready};
	 end

    // ---------------------------------------------------------
    //  Sequential logic — update buffers and window
    // ---------------------------------------------------------
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            col <= 0;
//            ready_shift <= 0;
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

            // -------------------------------------------------
            //  Ready signal pipeline
            // -------------------------------------------------
//            ready_shift <= {ready_shift[5:0], in_ready};
        end
    end

//    // ---------------------------------------------------------
//    //  5×5 Sobel convolution (combinational)
//    // ---------------------------------------------------------
//    always_comb begin
//        // Sobel X (5x5)
//        gx =
//            (-1*shift_0[0]) + (-2*shift_0[1]) + ( 2*shift_0[3]) + ( 1*shift_0[4]) +
//            (-4*shift_1[0]) + (-8*shift_1[1]) + ( 8*shift_1[3]) + ( 4*shift_1[4]) +
//            (-6*shift_2[0]) + (-12*shift_2[1]) + (12*shift_2[3]) + ( 6*shift_2[4]) +
//            (-4*shift_3[0]) + (-8*shift_3[1]) + ( 8*shift_3[3]) + ( 4*shift_3[4]) +
//            (-1*shift_4[0]) + (-2*shift_4[1]) + ( 2*shift_4[3]) + ( 1*shift_4[4]);
//
//        // Sobel Y (transpose)
//        gy =
//            (-1*shift_0[0]) + (-4*shift_1[0]) + (-6*shift_2[0]) + (-4*shift_3[0]) + (-1*shift_4[0]) +
//            (-2*shift_0[1]) + (-8*shift_1[1]) + (-12*shift_2[1]) + (-8*shift_3[1]) + (-2*shift_4[1]) +
//            ( 2*shift_0[3]) + ( 8*shift_1[3]) + ( 12*shift_2[3]) + ( 8*shift_3[3]) + ( 2*shift_4[3]) +
//            ( 1*shift_0[4]) + ( 4*shift_1[4]) + ( 6*shift_2[4]) + ( 4*shift_3[4]) + ( 1*shift_4[4]);
//
//        mag = $signed(gx) + $signed(gy);
//    end

// =============================================================
// 5×5 Sobel Convolution (3-stage pipelined)
// =============================================================
logic signed [15:0] gx_s1 [0:24];
logic signed [15:0] gy_s1 [0:24];
logic signed [17:0] gx_s2, gy_s2;
logic signed [18:0] mag_s3;


// -------------------------------------------------------------
// Stage 1: multiply pixels by kernel weights
// -------------------------------------------------------------
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        for (int i = 0; i < 25; i++) begin
            gx_s1[i] <= 0;
            gy_s1[i] <= 0;
        end
//        ready_pipe <= 0;
    end else if (in_ready) begin
        // Sobel X (weights applied)
        gx_s1[0]  <= -1*shift_0[0];  gx_s1[1]  <= -2*shift_0[1];  gx_s1[2]  <=  0;
        gx_s1[3]  <=  2*shift_0[3];  gx_s1[4]  <=  1*shift_0[4];

        gx_s1[5]  <= -4*shift_1[0];  gx_s1[6]  <= -8*shift_1[1];  gx_s1[7]  <=  0;
        gx_s1[8]  <=  8*shift_1[3];  gx_s1[9]  <=  4*shift_1[4];

        gx_s1[10] <= -6*shift_2[0];  gx_s1[11] <= -12*shift_2[1]; gx_s1[12] <=  0;
        gx_s1[13] <=  12*shift_2[3]; gx_s1[14] <=  6*shift_2[4];

        gx_s1[15] <= -4*shift_3[0];  gx_s1[16] <= -8*shift_3[1];  gx_s1[17] <=  0;
        gx_s1[18] <=  8*shift_3[3];  gx_s1[19] <=  4*shift_3[4];

        gx_s1[20] <= -1*shift_4[0];  gx_s1[21] <= -2*shift_4[1];  gx_s1[22] <=  0;
        gx_s1[23] <=  2*shift_4[3];  gx_s1[24] <=  1*shift_4[4];

        // Sobel Y (weights applied)
        gy_s1[0]  <= -1*shift_0[0];  gy_s1[1]  <= -4*shift_1[0];  gy_s1[2]  <= -6*shift_2[0];
        gy_s1[3]  <= -4*shift_3[0];  gy_s1[4]  <= -1*shift_4[0];

        gy_s1[5]  <= -2*shift_0[1];  gy_s1[6]  <= -8*shift_1[1];  gy_s1[7]  <= -12*shift_2[1];
        gy_s1[8]  <= -8*shift_3[1];  gy_s1[9]  <= -2*shift_4[1];

        gy_s1[10] <=  2*shift_0[3];  gy_s1[11] <=  8*shift_1[3];  gy_s1[12] <=  12*shift_2[3];
        gy_s1[13] <=  8*shift_3[3];  gy_s1[14] <=  2*shift_4[3];

        gy_s1[15] <=  1*shift_0[4];  gy_s1[16] <=  4*shift_1[4];  gy_s1[17] <=  6*shift_2[4];
        gy_s1[18] <=  4*shift_3[4];  gy_s1[19] <=  1*shift_4[4];

//        ready_shift <= {ready_shift[5:0], in_ready};
    end
end

// -------------------------------------------------------------
// Stage 2: partial sums (reduce tree)
// -------------------------------------------------------------
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        gx_s2 <= 0;
        gy_s2 <= 0;
//        ready_pipe[1] <= 0;
    end else begin
        gx_s2 <= gx_s1[0] + gx_s1[1] + gx_s1[3] + gx_s1[4] +
                 gx_s1[5] + gx_s1[6] + gx_s1[8] + gx_s1[9] +
                 gx_s1[10] + gx_s1[11] + gx_s1[13] + gx_s1[14] +
                 gx_s1[15] + gx_s1[16] + gx_s1[18] + gx_s1[19] +
                 gx_s1[20] + gx_s1[21] + gx_s1[23] + gx_s1[24];

        gy_s2 <= gy_s1[0] + gy_s1[1] + gy_s1[2] + gy_s1[3] + gy_s1[4] +
                 gy_s1[5] + gy_s1[6] + gy_s1[7] + gy_s1[8] + gy_s1[9] +
                 gy_s1[10] + gy_s1[11] + gy_s1[12] + gy_s1[13] + gy_s1[14] +
                 gy_s1[15] + gy_s1[16] + gy_s1[17] + gy_s1[18] + gy_s1[19];

//        ready_shift <= {ready_shift[5:0], in_ready};
    end
end

// -------------------------------------------------------------
// Stage 3: magnitude and output
// -------------------------------------------------------------
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        mag_s3 <= 0;
//        ready_pipe[2] <= 0;
    end else begin
        mag_s3 <= $signed(gx_s2) + $signed(gy_s2); // simplified |gx|+|gy|
//        ready_shift <= {ready_shift[5:0], in_ready};
    end
end


    // ---------------------------------------------------------
    //  Output scaling and ready flag
    // ---------------------------------------------------------
    assign uns_mag   = $unsigned(mag_s3);
    assign pixel_out = uns_mag[11:8];  // downscale to 4-bit output
    assign out_ready = ready_shift[6]; // 5x5 window + pipelined mac

endmodule
