/* verilator lint_off UNUSEDSIGNAL */
module rgb_to_grey (
    input  logic        clk,
    input  logic        rst,
    input  logic [11:0] pixel_in,
    output logic [3:0]  pixel_out,  // grayscale (4 bits)
    input  logic        in_ready,
    output logic        out_ready
);

    // Extract R, G, B components
    logic [3:0] r, g, b;
    always_comb begin
        r = pixel_in[11:8];
        g = pixel_in[7:4];
        b = pixel_in[3:0];
    end

    // Weighted grayscale conversion
    logic [7:0] gray_temp;
    always_comb begin
        gray_temp = (r * 5) + (g * 9) + (b * 2);
        pixel_out = gray_temp[7:4];  // divide by 16
    end

    // Pass-through ready (simple handshake propagation)
    assign out_ready = in_ready;

endmodule
/* verilator lint_on UNUSEDSIGNAL */
