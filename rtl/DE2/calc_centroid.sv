
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
    parameter int ROI_HEIGHT = 32,
    parameter int THRESHOLD  = 0,
    parameter int DIV_LATENCY = 5
)(
    input  logic        clk,
    input  logic        rst,
    input  logic        in_ready,
    input  logic [3:0]  pixel_in,

    output logic [10:0] centroid_x,
    output logic        line_valid,
    output logic        line_lost
);

    // ============================================================
    // Internal signals
    // ============================================================
    logic [10:0] row_sum_x [0:ROI_HEIGHT-1];
    logic [9:0]  row_sum_p [0:ROI_HEIGHT-1];

    logic [22:0] sum_x;
    logic [14:0] sum_p;

    logic [10:0] centroid_x_reg;
    logic [9:0]  pixel_count;
    logic [9:0]  row_count;
    logic [5:0]  row_idx;

    logic line_valid_reg;
    logic line_lost_reg;

    logic [22:0] current_row_sum_x;
    logic [14:0] current_row_sum_p;

    // ============================================================
    // Divider IP instantiation
    // ============================================================
    divide_ip Udiv (
        .aclr(rst),
        .clock(clk),
        .numer(sum_x),
        .denom(sum_p),
        .quotient(centroid_x_reg)
    );

    // pipeline registers for line_valid and line_lost
    logic [DIV_LATENCY-1:0] line_valid_pipe;
    logic [DIV_LATENCY-1:0] line_lost_pipe;

    // ============================================================
    // Row-level accumulation
    // ============================================================
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            pixel_count        <= 0;
            row_count          <= 0;
            row_idx            <= 0;
            current_row_sum_x  <= 0;
            current_row_sum_p  <= 0;
            sum_x              <= 0;
            sum_p              <= 0;
//            centroid_x_reg     <= 0;
            line_valid_reg     <= 0;
            line_lost_reg      <= 1;
            line_valid_pipe    <= 0;
            line_lost_pipe     <= {DIV_LATENCY{1'b1}};
            for (int i=0; i<ROI_HEIGHT; i++) begin
                row_sum_x[i] <= 0;
                row_sum_p[i] <= 0;
            end
        end
        else if (in_ready) begin
            // -------------------------------
            // accumulate current row
            // -------------------------------
            if (pixel_in > THRESHOLD) begin
                current_row_sum_x <= current_row_sum_x + pixel_count;
                current_row_sum_p <= current_row_sum_p + 1;
            end

            // -------------------------------
            // advance pixel
            // -------------------------------
            if (pixel_count == IMG_W-1) begin
                pixel_count <= 0;

                // rolling window: subtract oldest row, add new row
                sum_x <= sum_x - row_sum_x[row_idx] + current_row_sum_x;
                sum_p <= sum_p - row_sum_p[row_idx] + current_row_sum_p;

                // save current row in circular buffer
                row_sum_x[row_idx] <= current_row_sum_x;
                row_sum_p[row_idx] <= current_row_sum_p;

                // reset row accumulators
                current_row_sum_x <= 0;
                current_row_sum_p <= 0;

                // circular buffer index
                row_idx <= (row_idx + 1) % ROI_HEIGHT;

                // advance row
                row_count <= row_count + 1;
                if (row_count == IMG_H-1)
                    row_count <= 0;

                // -------------------------------
                // start line_valid/lost for divider pipeline
                // -------------------------------
                line_valid_pipe[0] <= (sum_p > 0);
                line_lost_pipe[0]  <= (sum_p == 0);
            end
            else begin
                pixel_count <= pixel_count + 1;

                // keep pipeline shifting even on other pixels
                line_valid_pipe[0] <= line_valid_pipe[0];
                line_lost_pipe[0]  <= line_lost_pipe[0];
            end

            // shift pipeline registers
            line_valid_pipe <= {line_valid_pipe[DIV_LATENCY-2:0], line_valid_pipe[0]};
            line_lost_pipe  <= {line_lost_pipe[DIV_LATENCY-2:0], line_lost_pipe[0]};
        end
    end

    // ============================================================
    // Output assignments
    // ============================================================
    assign centroid_x = centroid_x_reg;
    assign line_valid = line_valid_pipe[DIV_LATENCY-1];
    assign line_lost  = line_lost_pipe[DIV_LATENCY-1];

endmodule



//module calc_centroid #(
//    parameter int IMG_W      = 640,
//    parameter int IMG_H      = 480,
//    parameter int ROI_HEIGHT = 32,   // power of 2 for simplicity
//    parameter int THRESHOLD  = 0
//)(
//    input  logic        clk,
//    input  logic        rst,
//    input  logic        in_ready,
//    input  logic [3:0]  pixel_in,     // pixel_in > THRESHOLD → white pixel
//
//    output logic [10:0] centroid_x,   // centroid (valid when line_valid = 1)
//    output logic        line_valid,   // high when centroid_x is valid
//    output logic        line_lost     // high when no white pixels detected
//);
//
//
//
//
//
//		 
//    // ============================================================
//    // Internal signals
//    // ============================================================
//    logic [24:0] sum_x;       // sum of x positions of white pixels
//    logic [19:0] sum_p;       // number of white pixels
//    logic [10:0] centroid_x_reg;
//
//    logic [9:0] pixel_count;      // pixel position in row (0–639)
//    logic [9:0] row_count;        // current image row (0–479)
//    logic [9:0] window_start_row; // top of current ROI window
//
//    logic        line_valid_reg;
//    logic        line_lost_reg;
//
//
//		 
//		 
//    // ============================================================
//    // Sequential Logic
//    // ============================================================
//    always_ff @(posedge clk or posedge rst) begin
//        if (rst) begin
//            sum_x            <= 0;
//            sum_p            <= 0;
//            pixel_count      <= 0;
//            row_count        <= 0;
//            window_start_row <= 0;
//            centroid_x_reg   <= 0;
//            line_valid_reg   <= 0;
//            line_lost_reg    <= 1;
//        end
//        else if (in_ready) begin
//            // ----------------------------------------------------
//            // Process each pixel
//            // ----------------------------------------------------
//            if (pixel_in > THRESHOLD) begin
//                sum_x <= sum_x + pixel_count;
//                sum_p <= sum_p + 1;
//            end
//
//            // ----------------------------------------------------
//            // Advance pixel counter
//            // ----------------------------------------------------
//            if (pixel_count == IMG_W - 1) begin
//                pixel_count <= 0;
//                row_count   <= row_count + 1;
//
//                // ------------------------------------------------
//                // If we've reached the end of the ROI window
//                // ------------------------------------------------
//                if (row_count - window_start_row == ROI_HEIGHT) begin
//                    if (sum_p > 0) begin
//                        centroid_x_reg <= sum_x / sum_p;  // true average
//                        line_valid_reg <= 1;
//                        line_lost_reg  <= 0;
//                    end
//                    else begin
//                        centroid_x_reg <= 0;
//                        line_valid_reg <= 0;
//                        line_lost_reg  <= 1;
//                    end
//
//                    // Slide window down by one row
//                    window_start_row <= window_start_row + 1;
//
//                    // Reset accumulators
//                    sum_x <= 0;
//                    sum_p <= 0;
//                end
//            end
//            else begin
//                pixel_count <= pixel_count + 1;
//            end
//
//            // ----------------------------------------------------
//            // Reset row counter after full image frame
//            // ----------------------------------------------------
//            if (row_count == IMG_H - 1) begin
//                row_count        <= 0;
//                window_start_row <= 0;
//            end
//        end
//    end
//
//    // ============================================================
//    // Output assignments
//    // ============================================================
//    assign centroid_x = centroid_x_reg;
//    assign line_valid = line_valid_reg;
//    assign line_lost  = line_lost_reg;
//
//endmodule
