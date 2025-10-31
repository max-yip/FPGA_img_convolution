
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
    parameter int IMG_W       = 640,
    parameter int IMG_H       = 480,
    parameter int ROI_HEIGHT  = 32,
    parameter int THRESHOLD   = 0,
    parameter int DIV_LATENCY = 6
)(
    input  logic        clk,
    input  logic        rst,
    input  logic        in_ready,
    input  logic [3:0]  pixel_in,

    output logic        out_ready,
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
    logic [5:0]  row_idx;

    logic [22:0] current_row_sum_x;
    logic [14:0] current_row_sum_p;

    // ============================================================
    // Divider IP
    // ============================================================
    divide_ip Udiv (
        .aclr(1'b0),
        .clock(clk),
        .numer(sum_p == 0 ? 0 : sum_x),
        .denom(sum_p == 0 ? 1 : sum_p),
        .quotient(centroid_x_reg)
    );

    // ============================================================
    // Pipeline registers for valid/lost/out_ready
    // ============================================================
    logic [DIV_LATENCY-1:0] line_valid_pipe;
    logic [DIV_LATENCY-1:0] line_lost_pipe;
    logic [DIV_LATENCY-1:0] out_ready_pipe;

    // ============================================================
    // Row-level accumulation
    // ============================================================
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            pixel_count        <= 0;
            row_idx            <= 0;
            current_row_sum_x  <= 0;
            current_row_sum_p  <= 0;
            sum_x              <= 0;
            sum_p              <= 0;
            line_valid_pipe    <= 0;
            line_lost_pipe     <= {DIV_LATENCY{1'b1}};
            out_ready_pipe     <= 0;
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
            // end of line handling
            // -------------------------------
            if (pixel_count == IMG_W-1) begin
                pixel_count <= 0;

                // update rolling window sums
                sum_x <= sum_x - row_sum_x[row_idx] + current_row_sum_x;
                sum_p <= sum_p - row_sum_p[row_idx] + current_row_sum_p;

                row_sum_x[row_idx] <= current_row_sum_x;
                row_sum_p[row_idx] <= current_row_sum_p;

                current_row_sum_x <= 0;
                current_row_sum_p <= 0;

                // safe circular index
                row_idx <= (row_idx == ROI_HEIGHT-1) ? 0 : row_idx + 1;

                // feed new flags
                line_valid_pipe <= {line_valid_pipe[DIV_LATENCY-2:0], (sum_p > 0)};
                line_lost_pipe  <= {line_lost_pipe[DIV_LATENCY-2:0], (sum_p == 0)};
                out_ready_pipe  <= {out_ready_pipe[DIV_LATENCY-2:0], 1'b1}; // delay out_ready
            end
            else begin
                pixel_count <= pixel_count + 1;
                out_ready_pipe <= {out_ready_pipe[DIV_LATENCY-2:0], 1'b0};
            end
        end
    end

    // ============================================================
    // Output assignments
    // ============================================================
    assign centroid_x = centroid_x_reg;
    assign line_valid = line_valid_pipe[DIV_LATENCY-1];
    assign line_lost  = line_lost_pipe[DIV_LATENCY-1];
    assign out_ready  = out_ready_pipe[DIV_LATENCY-1];

endmodule

