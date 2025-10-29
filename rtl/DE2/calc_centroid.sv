// calc_centroid_line_tracker.sv
// SystemVerilog module: ROI-based centroid_x with per-row output and line-lost detection.
// Assumes raster scan, left-to-right top-to-bottom, with frame_start/frame_end pulses.
//
// Defaults:
//   IMG_W = 640, IMG_H = 480, ROI_HEIGHT = 60
// Outputs:
//   centroid_x      - frame-level centroid over ROI (valid at line_valid pulse)
//   line_valid      - pulses high for one clock when centroid_x is updated (frame_end)
//   line_lost       - high when no pixels found in ROI on the frame (valid with line_valid)
//   row_centroid_x  - centroid for current row inside ROI (valid when row_valid)
//   row_valid       - pulses high one clock at end of processed row (only for rows in ROI)
//
// calc_centroid_line_tracker.sv
// Line-tracking centroid module with internal thresholding

/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */
module calc_centroid #(
    parameter int IMG_W      = 640,
    parameter int IMG_H      = 480,
    parameter int ROI_HEIGHT = 64,      // choose power-of-2 for easy division
    parameter int THRESHOLD  = 0        // 4-bit threshold
)(
    input  logic           clk,
    input  logic           rst,
    input  logic           in_ready,
    input  logic [3:0]     pixel_in,
    output logic [10:0] centroid_x,
    output logic           line_valid,
    output logic           line_lost
);

    localparam int ROI_START_ROW = IMG_H - ROI_HEIGHT;	// 480-64
    localparam int X_W = $clog2(IMG_W);
    localparam int Y_W = $clog2(IMG_H);
    localparam int SUM_W = $clog2(IMG_W * ROI_HEIGHT) + 1;
    localparam int ROW_COUNT_LOG2 = $clog2(ROI_HEIGHT);

    // Hold width: number of clocks to stretch the line_valid/line_lost pulse for visibility
    parameter int VALID_HOLD_CYCLES = 8;

    // Counters
    logic [X_W-1:0] x_cnt;
    logic [Y_W-1:0] y_cnt;

    // Per-row tracking
    logic [$clog2(IMG_W)-1:0] first_pixel;
    logic [$clog2(IMG_W)-1:0] last_pixel;
    logic row_active;

    // ROI accumulators
    logic [SUM_W-1:0] sum_midpoints;
    logic [$clog2(ROI_HEIGHT)-1:0] row_count;

    // Combinational: compute floor(log2(row_count)) -> use as shift amount
    // This lets us approximate division by row_count via a right shift by the MSB position.
    // Note: this is an approximation (division by nearest lower power-of-two).
    logic [$clog2(ROI_HEIGHT)-1:0] row_count_msb;
    integer i;
    always_comb begin
		 row_count_msb = '0;

		 // scan from top bit down to find MSB
		 find_msb: for (i = $clog2(ROI_HEIGHT)-1; i >= 0; i = i - 1) begin
			 if (row_count[i]) begin
					 row_count_msb = i;
					 disable find_msb; // stop scanning once MSB found
			 end
		 end
	 end


    // Output registers (make centroid register 11 bits to match output width)
    logic [10:0] centroid_x_r;
    logic line_valid_r, line_lost_r;

    // Visibility / hold counter for the pulses
    logic [$clog2(VALID_HOLD_CYCLES+1)-1:0] valid_hold_cnt;
    logic valid_hold_active;

    assign centroid_x = centroid_x_r;
    assign line_valid  = line_valid_r;
    assign line_lost   = line_lost_r;

    // Thresholded pixel
    logic pixel_bin;
    assign pixel_bin = (pixel_in > THRESHOLD);

    always_ff @(posedge clk) begin
        if (rst) begin
            x_cnt <= 0;
            y_cnt <= 0;
            first_pixel <= IMG_W;
            last_pixel <= 0;
            row_active <= 0;
            sum_midpoints <= 0;
            row_count <= 0;
            centroid_x_r <= IMG_W/2;
            line_valid_r <= 0;
            line_lost_r <= 0;
            valid_hold_cnt <= '0;
            valid_hold_active <= 1'b0;
        end else if (in_ready) begin
            // Clear transient line_valid each cycle, we'll assert it (and hold) at frame end.
            if (!valid_hold_active) begin
                line_valid_r <= 0;
                line_lost_r  <= 0;
            end

            // Only process ROI rows
            if (y_cnt >= ROI_START_ROW) begin
                // Track first and last pixel
                if (pixel_bin) begin
                    if (!row_active) begin
                        first_pixel <= x_cnt;
                        row_active <= 1;
                    end
                    last_pixel <= x_cnt;
                end

                // End of row
                if (x_cnt == IMG_W-1) begin
                    if (row_active) begin
                        sum_midpoints <= sum_midpoints + ((first_pixel + last_pixel) >> 1);
                        row_count <= row_count + 1;
                    end
                    // Reset per row
                    first_pixel <= IMG_W;
                    last_pixel <= 0;
                    row_active <= 0;

                    // Advance row
                    if (y_cnt == IMG_H-1) begin
                        // End of frame
                        if (row_count != 0) begin
                            // centroid = average of midpoints over actual row_count
                            // Use a shift-based approximation (divide by nearest lower power-of-two)
                            // to avoid variable division hardware. This is an approximation:
                            // centroid ≈ sum_midpoints >> floor(log2(row_count))
                            centroid_x_r <= (sum_midpoints >> row_count_msb);
                            line_lost_r <= 0;
                        end else begin
                            centroid_x_r <= IMG_W/2;
                            line_lost_r <= 1;
                        end
                        // Assert line_valid and start hold counter so downstream displays/LEDs can observe it
                        line_valid_r <= 1'b1;
                        valid_hold_active <= 1'b1;
                        valid_hold_cnt <= VALID_HOLD_CYCLES - 1;

                        // Reset accumulators for next frame
                        sum_midpoints <= 0;
                        row_count <= 0;
                        y_cnt <= 0;
                    end else begin
                        y_cnt <= y_cnt + 1;
                    end
                    x_cnt <= 0;
                end else begin
                    x_cnt <= x_cnt + 1;
                end
            end else begin
                // Not ROI yet, just advance counters
                if (x_cnt == IMG_W-1) begin
                    x_cnt <= 0;
                    if (y_cnt == IMG_H-1)
                        y_cnt <= 0;
                    else
                        y_cnt <= y_cnt + 1;
                end else begin
                    x_cnt <= x_cnt + 1;
                end
            end
        end else begin
            // in_ready low: optional behavior unchanged
        end

        // valid hold timing (stretch the pulse for visibility)
        if (valid_hold_active) begin
            if (valid_hold_cnt != 0) begin
                valid_hold_cnt <= valid_hold_cnt - 1;
            end else begin
                valid_hold_active <= 1'b0;
                line_valid_r <= 1'b0;
                // keep line_lost_r asserted only during hold window; clear afterwards
                line_lost_r <= 1'b0;
            end
        end
    end
endmodule
