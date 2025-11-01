module color_filter (
    input  logic        clk,
    input  logic        rst,
    input  logic [11:0] pixel_in,
    input  logic        in_ready,
    input  logic [2:0]  parcel_color, // 0=none, 1=red, 2=green, 3=blue
    output logic [11:0] pixel_out,
    output logic        out_ready
);

logic [3:0] in_r, in_g, in_b;
logic [3:0] out_r, out_g, out_b;

// ---------------------------
// Split input pixel channels
// ---------------------------
always_comb begin
    if (in_ready) begin
        in_r = pixel_in[11:8];
        in_g = pixel_in[7:4];
        in_b = pixel_in[3:0];
    end
    else begin
        in_r = 4'b0;
        in_g = 4'b0;
        in_b = 4'b0;
    end
end

// ---------------------------
// Apply color filtering
// ---------------------------
always_comb begin
    out_r = in_r;
    out_g = in_g;
    out_b = in_b;

    unique case (parcel_color)
        3'd1: begin // red
            out_g = 4'b0;
            out_b = 4'b0;
        end
        3'd2: begin // green
            out_r = 4'b0;
            out_b = 4'b0;
        end
        3'd3: begin // blue
            out_r = 4'b0;
            out_g = 4'b0;
        end
        default: begin // none
            out_r = 4'b0;
            out_g = 4'b0;
            out_b = 4'b0;
        end
    endcase
end

// ---------------------------
// Recombine into output pixel
// ---------------------------
assign pixel_out = {out_r, out_g, out_b};
assign out_ready = in_ready;

endmodule
