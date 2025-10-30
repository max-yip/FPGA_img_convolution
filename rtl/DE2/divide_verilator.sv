/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
module divide_verilator (
    input  logic        aclr,
    input  logic        clock,
    input  logic [22:0] numer,
    input  logic [14:0] denom,
    output logic [10:0] quotient
);

    parameter LATENCY = 6;
    logic [10:0] div_pipe [0:LATENCY-1];

    always_ff @(posedge clock or posedge aclr) begin
        if (aclr) begin
            for (int i = 0; i < LATENCY; i++)
                div_pipe[i] <= 0;
        end else if (denom != 0) begin
            div_pipe[0] <= numer / denom;
            for (int i = 1; i < LATENCY; i++)
                div_pipe[i] <= div_pipe[i-1];
        end
    end

    assign quotient = div_pipe[LATENCY-1];
endmodule
