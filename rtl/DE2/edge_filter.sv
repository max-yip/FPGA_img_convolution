`timescale 1ns/1ps
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off WIDTHEXPAND */

module edge_filter #(
    parameter IMG_W = 640,
    parameter IMG_H = 480
)(
    input  logic        clk,
    input  logic        rst,
    input  logic [3:0]  pixel_in,    // 4-bit grayscale input
    output logic [3:0]  pixel_out,    // 4-bit edge output
    input  logic        in_ready,
    output logic        out_ready
);

    // -----------------------------
    // Line buffers for previous two rows
    // -----------------------------
    logic [3:0] line0 [0:IMG_W-1];
    logic [3:0] line1 [0:IMG_W-1];
    integer col;

    // -----------------------------
    // Horizontal shift registers for 3x3 window
    // -----------------------------
    logic [3:0] shift_top [2:0];
    logic [3:0] shift_mid [2:0];
    logic [3:0] shift_bot [2:0];

    // Sobel result
    logic signed [7:0] gx, gy;
    logic signed [8:0] mag;
	 logic [8:0] uns_mag;

    // Pipeline ready
    logic [2:0] ready_shift;

    // -----------------------------
    // Main sequential block
    // -----------------------------
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            col <= 0;
            shift_top[0] <= 0; shift_top[1] <= 0; shift_top[2] <= 0;
            shift_mid[0] <= 0; shift_mid[1] <= 0; shift_mid[2] <= 0;
            shift_bot[0] <= 0; shift_bot[1] <= 0; shift_bot[2] <= 0;
            ready_shift <= 0;

            // Clear line buffers
            for (integer i = 0; i < IMG_W; i=i+1) begin
                line0[i] <= 0;
                line1[i] <= 0;
            end
        end else if (in_ready) begin
            // -----------------------------
            // Update 3x3 shift registers
            // -----------------------------
            shift_top[0] <= shift_top[1]; shift_top[1] <= shift_top[2]; shift_top[2] <= line0[col];
            shift_mid[0] <= shift_mid[1]; shift_mid[1] <= shift_mid[2]; shift_mid[2] <= line1[col];
            shift_bot[0] <= shift_bot[1]; shift_bot[1] <= shift_bot[2]; shift_bot[2] <= pixel_in;

            // -----------------------------
            // Update line buffers (circular write)
            // -----------------------------
            line0[col] <= line1[col];
            line1[col] <= pixel_in;

            // -----------------------------
            // Advance column pointer
            // -----------------------------
            if (col == IMG_W-1)
                col <= 0;
            else
                col <= col + 1;

            // -----------------------------
            // Update ready pipeline
            // -----------------------------
            ready_shift <= {ready_shift[1:0], in_ready};
        end
    end

    // -----------------------------
    // Sobel computation (combinational)
    // -----------------------------
    always_comb begin
        // Positive-only Sobel X kernel
        // Original: [-1 0 1; -2 0 2; -1 0 1]
        gx = (shift_top[2] + 2*shift_mid[2] + shift_bot[2]) - 
            (shift_top[0] + 2*shift_mid[0] + shift_bot[0]); // difference still unsigned

        // Positive-only Sobel Y kernel
        gy = (shift_bot[0] + 2*shift_bot[1] + shift_bot[2]) -
            (shift_top[0] + 2*shift_top[1] + shift_top[2]);

        // Combine magnitudes
        mag = gx + gy; // always non-negative
    end

    // Downscale to 4-bit pixel output
	 assign uns_mag = $unsigned(mag);
    assign pixel_out = uns_mag[7:4];

    // Ready signal (needs proper pipeline if using 3x3 window)
    assign out_ready = in_ready;

endmodule

/* verilator lint_on UNUSEDSIGNAL */
/* verilator lint_on UNUSEDPARAM */
/* verilator lint_on WIDTHEXPAND */
