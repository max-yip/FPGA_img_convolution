module grey_to_rgb (
    input           clk,
    input           rst,
    input  [3:0]    pixel_in, // 4-bit grey pixel
    output logic [11:0] pixel_out, // 12-bit RGB output
    input           in_ready,
    output          out_ready
);

    // Combinational conversion: replicate 4-bit grey to RGB
    always_comb begin
        pixel_out = {pixel_in, pixel_in, pixel_in};
    end

    // Ready signal passes through
    assign out_ready = in_ready;

endmodule

