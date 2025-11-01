`timescale 1ns/1ps
module gaussian_filter #(
    parameter int IMG_W = 640,
    parameter int IMG_H = 480
)(
    input  logic        clk,
    input  logic        rst,
    input  logic [3:0]  pixel_in,    // 4-bit grayscale
    input  logic        in_ready,
    output logic [3:0]  pixel_out,   // 4-bit blurred output
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


	 
	 logic [7:0] sum;  // Wider to prevent overflow (since 9 * 8-bit = up to 12 bits)

	 always_comb begin
		 // Simple average of 3x3 neighborhood
		 sum = shift_top[0] + shift_top[1] + shift_top[2] +
				 shift_mid[0] + shift_mid[1] + shift_mid[2] +
				 shift_bot[0] + shift_bot[1] + shift_bot[2];

		 // Divide by 9 — use integer division (truncates fractional part)
		 pixel_out = (sum*29)>>8;
	 end

    // output ready
    assign out_ready = in_ready;

endmodule
