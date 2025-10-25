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
    logic [7:0] mag;

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
        // Gx = [-1 0 1; -2 0 2; -1 0 1]
        gx =  ($signed(shift_top[0]) - $signed(shift_top[2])) +
              2*($signed(shift_mid[0]) - $signed(shift_mid[2])) +
              ($signed(shift_bot[0]) - $signed(shift_bot[2]));

        // Gy = [1 2 1; 0 0 0; -1 -2 -1]
        gy =  ($signed(shift_top[0]) + 2*$signed(shift_top[1]) + $signed(shift_top[2])) -
              ($signed(shift_bot[0]) + 2*$signed(shift_bot[1]) + $signed(shift_bot[2]));

        // Approximate magnitude and downscale to 4-bit
        mag = ($unsigned(gx[7:4]) + $unsigned(gy[7:4]));
    end

    assign pixel_out = mag[3:0];
    // assign out_ready = ready_shift[2]; // valid after 3x3 window is ready
    assign out_ready = in_ready;

endmodule

/* verilator lint_on UNUSEDSIGNAL */
/* verilator lint_on UNUSEDPARAM */
/* verilator lint_on WIDTHEXPAND */
