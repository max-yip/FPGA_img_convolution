module color_filter (
    input clk,
    input rst,
    input [11:0] pixel_in,
    input in_ready,
    input veml_ready,
    input parcel_color,
    output [11:0] pixel_out,
    output out_ready    
);


// require finishing colour detector first

endmodule

// module calc_centroid #(
//     parameter IMG_W = 640,
//     parameter IMG_H = 480
// )(
//     input  logic                     clk,
//     input  logic                     rst,
//     input  logic                     pixel_in,   // 1-bit greyscale / binary mask
//     input  logic                     in_ready,   // 1 when pixel_in is valid
//     input  logic                     frame_start,// asserted at start of a frame
//     input  logic                     frame_end,  // asserted at end of frame
//     output logic [$clog2(IMG_W):0]   centroid_x,
//     output logic [$clog2(IMG_H):0]   centroid_y
// );

//     // Coordinate counters
//     logic [$clog2(IMG_W)-1:0] x;
//     logic [$clog2(IMG_H)-1:0] y;

//     // Accumulators
//     logic [$clog2(IMG_W*IMG_H*IMG_W)-1:0] sum_x; // large enough for max sum
//     logic [$clog2(IMG_W*IMG_H*IMG_H)-1:0] sum_y;
//     logic [$clog2(IMG_W*IMG_H):0]         count;

//     // Frame scanning & accumulation
//     always_ff @(posedge clk or posedge rst) begin
//         if (rst) begin
//             x <= 0;
//             y <= 0;
//             sum_x <= 0;
//             sum_y <= 0;
//             count <= 0;
//         end else begin
//             if (frame_start) begin
//                 x <= 0;
//                 y <= 0;
//                 sum_x <= 0;
//                 sum_y <= 0;
//                 count <= 0;
//             end

//             if (in_ready) begin
//                 // If pixel is active, accumulate
//                 if (pixel_in) begin
//                     sum_x <= sum_x + x;
//                     sum_y <= sum_y + y;
//                     count <= count + 1;
//                 end

//                 // Update x/y
//                 if (x == IMG_W-1) begin
//                     x <= 0;
//                     if (y != IMG_H-1) y <= y + 1;
//                 end else begin
//                     x <= x + 1;
//                 end
//             end
//         end
//     end

//     // Output centroid at frame end
//     always_ff @(posedge clk) begin
//         if (frame_end) begin
//             if (count != 0) begin
//                 centroid_x <= sum_x / count;
//                 centroid_y <= sum_y / count;
//             end else begin
//                 centroid_x <= 0;
//                 centroid_y <= 0;
//             end
//         end
//     end

// endmodule