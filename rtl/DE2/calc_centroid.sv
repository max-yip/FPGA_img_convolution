
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNUSEDPARAM */
// calc_centroid_simple.sv
// Simplified ROI-based centroid tracker for line following.
//
// Functionality:
//   - Computes centroid_x (average of midpoints of detected line per ROI row).
//   - line_valid: one-cycle pulse when centroid is updated (frame end).
//   - line_lost: high when no valid pixels found in ROI.
//   - Processes only bottom ROI_HEIGHT rows.
//
// Assumes pixel_in comes in raster order with 'in_ready' per pixel.

// calc_centroid_line_tracker_simple_shift.sv
// Simplified line-tracking centroid module using fixed-point shift (no division).
// Computes average X position of detected line in bottom ROI.
//
// Assumptions:
//  - Image scanned left-to-right, top-to-bottom.
//  - ROI covers bottom ROI_HEIGHT rows.
//  - Each row midpoint contributes equally (row_count ≈ ROI_HEIGHT).
//
// Outputs:
//   centroid_x : approximate average of midpoints across ROI
//   line_valid : 1-cycle pulse when centroid_x updated (frame end)
//   line_lost  : high when no pixels found in ROI
//
`timescale 1ns/1ps

module calc_centroid #(
    parameter int IMG_W      = 640,
    parameter int IMG_H      = 480,
    parameter int ROI_HEIGHT = 64,   // power of 2 for simplicity
    parameter int THRESHOLD  = 0
)(
    input  logic        clk,
    input  logic        rst,
    input  logic        in_ready,
    input  logic [3:0]  pixel_in,     // pixel_in > THRESHOLD → white pixel

    output logic [10:0] centroid_x,   // centroid (valid when line_valid = 1)
    output logic        line_valid,   // high when centroid_x is valid
    output logic        line_lost     // high when no white pixels detected
);

    // ============================================================
    // Internal signals
    // ============================================================
    logic [24:0] sum_x;       // sum of x positions of white pixels
    logic [19:0] sum_p;       // number of white pixels
    logic [10:0] centroid_x_reg;

    logic [9:0] pixel_count;      // pixel position in row (0–639)
    logic [9:0] row_count;        // current image row (0–479)
    logic [9:0] window_start_row; // top of current ROI window

    logic        line_valid_reg;
    logic        line_lost_reg;

    // ============================================================
    // Sequential Logic
    // ============================================================
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            sum_x            <= 0;
            sum_p            <= 0;
            pixel_count      <= 0;
            row_count        <= 0;
            window_start_row <= 0;
            centroid_x_reg   <= 0;
            line_valid_reg   <= 0;
            line_lost_reg    <= 1;
        end
        else if (in_ready) begin
            // ----------------------------------------------------
            // Process each pixel
            // ----------------------------------------------------
            if (pixel_in > THRESHOLD) begin
                sum_x <= sum_x + pixel_count;
                sum_p <= sum_p + 1;
            end

            // ----------------------------------------------------
            // Advance pixel counter
            // ----------------------------------------------------
            if (pixel_count == IMG_W - 1) begin
                pixel_count <= 0;
                row_count   <= row_count + 1;

                // ------------------------------------------------
                // If we've reached the end of the ROI window
                // ------------------------------------------------
                if (row_count - window_start_row == ROI_HEIGHT) begin
                    if (sum_p > 0) begin
                        centroid_x_reg <= sum_x / sum_p;  // true average
                        line_valid_reg <= 1;
                        line_lost_reg  <= 0;
                    end
                    else begin
                        centroid_x_reg <= 0;
                        line_valid_reg <= 0;
                        line_lost_reg  <= 1;
                    end

                    // Slide window down by one row
                    window_start_row <= window_start_row + 1;

                    // Reset accumulators
                    sum_x <= 0;
                    sum_p <= 0;
                end
            end
            else begin
                pixel_count <= pixel_count + 1;
            end

            // ----------------------------------------------------
            // Reset row counter after full image frame
            // ----------------------------------------------------
            if (row_count == IMG_H - 1) begin
                row_count        <= 0;
                window_start_row <= 0;
            end
        end
    end

    // ============================================================
    // Output assignments
    // ============================================================
    assign centroid_x = centroid_x_reg;
    assign line_valid = line_valid_reg;
    assign line_lost  = line_lost_reg;

endmodule
