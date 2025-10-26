
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
    parameter int ROI_HEIGHT = 60,       // bottom rows to consider
    parameter int THRESHOLD  = 0          // 4-bit threshold for pixel
)(
    input  logic           clk,
    input  logic           rst,
    input  logic           in_ready,       // asserted once per pixel
    input  logic [3:0]     pixel_in,      // 4-bit edge magnitude
    output logic [$clog2(IMG_W)-1:0] centroid_x,
    output logic           line_valid,
    output logic           line_lost
    // output logic [$clog2(IMG_W)-1:0] row_centroid_x,
    // output logic           row_valid
);

    // Derived constants
    localparam int ROI_START_ROW = (IMG_H > ROI_HEIGHT) ? (IMG_H - ROI_HEIGHT) : 0;
    localparam int MAX_PIXELS_IN_ROI = IMG_W * ROI_HEIGHT;

    // Widths
    localparam int X_W = $clog2(IMG_W);
    localparam int Y_W = $clog2(IMG_H);
    localparam int SUMX_W = $clog2(IMG_W*ROI_HEIGHT*IMG_W) + 1;
    localparam int CNT_W = $clog2(MAX_PIXELS_IN_ROI+1) + 1;


    logic row_valid;
    logic [$clog2(IMG_W)-1:0] row_centroid_x;


    // Counters
    logic [X_W-1:0] x_cnt;
    logic [Y_W-1:0] y_cnt;

    // Accumulators
    logic [SUMX_W-1:0] row_sum_x;
    logic [CNT_W-1:0]  row_count;
    logic [SUMX_W-1:0] roi_sum_x;
    logic [CNT_W-1:0]  roi_count;

    // Registers for outputs
    logic [$clog2(IMG_W)-1:0] centroid_x_r;
    logic                     line_valid_r;
    logic                     line_lost_r;
    logic [$clog2(IMG_W)-1:0] row_centroid_x_r;
    logic                     row_valid_r;

    assign centroid_x     = centroid_x_r;
    assign line_valid     = line_valid_r;
    assign line_lost      = line_lost_r;
    assign row_centroid_x = row_centroid_x_r;
    assign row_valid      = row_valid_r;

    // Thresholded 1-bit pixel
    logic pixel_bin;
    assign pixel_bin = (pixel_in > THRESHOLD) ? 1'b1 : 1'b0;

    always_ff @(posedge clk) begin
        if (rst) begin
            x_cnt <= 0;
            y_cnt <= 0;
            row_sum_x <= 0;
            row_count <= 0;
            roi_sum_x <= 0;
            roi_count <= 0;
            centroid_x_r <= 0;
            row_centroid_x_r <= 0;
            line_valid_r <= 0;
            row_valid_r <= 0;
            line_lost_r <= 0;
        end else begin
            // default: single-cycle valid pulses
            line_valid_r <= 0;
            row_valid_r  <= 0;

            if (in_ready) begin
                // accumulate if pixel active and in ROI
                if (pixel_bin && (y_cnt >= ROI_START_ROW)) begin
                    row_sum_x <= row_sum_x + x_cnt;
                    row_count <= row_count + 1;
                    roi_sum_x <= roi_sum_x + x_cnt;
                    roi_count <= roi_count + 1;
                end

                // end of row
                if (x_cnt == IMG_W-1) begin
                    // per-row centroid
                    if (y_cnt >= ROI_START_ROW) begin
                        if (row_count != 0)
                            row_centroid_x_r <= row_sum_x / row_count;
                        else
                            row_centroid_x_r <= IMG_W >> 1; // center if lost
                        row_valid_r <= 1;
                    end

                    // reset row accumulators
                    row_sum_x <= 0;
                    row_count <= 0;

                    // next row
                    if (y_cnt == IMG_H-1) begin
                        // end of frame: compute frame centroid
                        if (roi_count != 0) begin
                            centroid_x_r <= roi_sum_x / roi_count;
                            line_lost_r  <= 0;
                        end else begin
                            centroid_x_r <= IMG_W >> 1;
                            line_lost_r  <= 1;
                        end
                        line_valid_r <= 1;

                        // reset frame accumulators
                        roi_sum_x <= 0;
                        roi_count <= 0;

                        y_cnt <= 0;
                    end else begin
                        y_cnt <= y_cnt + 1;
                    end
                    x_cnt <= 0;
                end else begin
                    x_cnt <= x_cnt + 1;
                end
            end
        end
    end

endmodule
