`timescale 1ns/1ps
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off WIDTHEXPAND */

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
    logic [4:0] ready_shift;

    // ---------------------------------------------------------
    //  Sequential logic — update buffers and window
    // ---------------------------------------------------------
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            col <= 0;
            ready_shift <= 0;
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
            ready_shift <= {ready_shift[3:0], in_ready};
        end
    end

    // ---------------------------------------------------------
    //  5×5 Sobel convolution (combinational)
    // ---------------------------------------------------------
    always_comb begin
        // Sobel X (5x5)
        gx =
            (-1*shift_0[0]) + (-2*shift_0[1]) + ( 2*shift_0[3]) + ( 1*shift_0[4]) +
            (-4*shift_1[0]) + (-8*shift_1[1]) + ( 8*shift_1[3]) + ( 4*shift_1[4]) +
            (-6*shift_2[0]) + (-12*shift_2[1]) + (12*shift_2[3]) + ( 6*shift_2[4]) +
            (-4*shift_3[0]) + (-8*shift_3[1]) + ( 8*shift_3[3]) + ( 4*shift_3[4]) +
            (-1*shift_4[0]) + (-2*shift_4[1]) + ( 2*shift_4[3]) + ( 1*shift_4[4]);

        // Sobel Y (transpose)
        gy =
            (-1*shift_0[0]) + (-4*shift_1[0]) + (-6*shift_2[0]) + (-4*shift_3[0]) + (-1*shift_4[0]) +
            (-2*shift_0[1]) + (-8*shift_1[1]) + (-12*shift_2[1]) + (-8*shift_3[1]) + (-2*shift_4[1]) +
            ( 2*shift_0[3]) + ( 8*shift_1[3]) + ( 12*shift_2[3]) + ( 8*shift_3[3]) + ( 2*shift_4[3]) +
            ( 1*shift_0[4]) + ( 4*shift_1[4]) + ( 6*shift_2[4]) + ( 4*shift_3[4]) + ( 1*shift_4[4]);

        mag = $signed(gx) + $signed(gy);
    end

    // ---------------------------------------------------------
    //  Output scaling and ready flag
    // ---------------------------------------------------------
    assign uns_mag   = $unsigned(mag);
    assign pixel_out = uns_mag[11:8];  // downscale to 4-bit output
    assign out_ready = ready_shift[4]; // adjusted for 5×5 window delay

endmodule
