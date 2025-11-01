module color_filter (
    input  logic        clk,
    input  logic        rst,
    input  logic [11:0] pixel_in,
    input  logic        in_ready,
    input  logic [2:0]  parcel_color, // 0=none, 1=red, 2=green, 3=blue
    output logic [3:0]  pixel_out,
    output logic        out_ready
);

parameter int THRESH = 2; // minimum dominance to count as "that color"

logic [3:0] in_r, in_g, in_b;
logic [4:0] diff_r, diff_g, diff_b;

// ---------------------------
// Split input pixel channels
// ---------------------------
always_comb begin
    if (in_ready) begin
        in_r = pixel_in[11:8];
        in_g = pixel_in[7:4];
        in_b = pixel_in[3:0];
    end else begin
        in_r = 4'b0;
        in_g = 4'b0;
        in_b = 4'b0;
    end
end

// ---------------------------
// Compute dominance of each color
// ---------------------------
always_comb begin
    diff_r = in_r - ((in_g + in_b) >> 1);
    diff_g = in_g - ((in_r + in_b) >> 1);
    diff_b = in_b - ((in_r + in_g) >> 1);
end

// ---------------------------
// Intensify selected color only
// ---------------------------
always_comb begin
    pixel_out = 4'd0;

    unique case (parcel_color)
        3'd1: begin // red
            if (diff_r > THRESH)
                pixel_out = 4'd15;  // fully bright
            else
                pixel_out = 4'd0;   // suppress
        end
        3'd2: begin // green
            if (diff_g > THRESH)
                pixel_out = 4'd15;
            else
                pixel_out = 4'd0;
        end
        3'd3: begin // blue
            if (diff_b > THRESH)
                pixel_out = 4'd15;
            else
                pixel_out = 4'd0;
        end
        default: pixel_out = 4'd0;
    endcase
end

assign out_ready = in_ready;

endmodule
