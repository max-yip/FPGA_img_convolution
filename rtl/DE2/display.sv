`timescale 1ns/1ps

module display (
    input         clk,
    input         ready,        // pulse from calc_centroid
    input  [10:0] value,
    output [6:0]  display0,
    output [6:0]  display1,
    output [6:0]  display2,
    output [6:0]  display3
);

    // ============================================================
    // Latch the input value whenever ready goes high
    // ============================================================
    logic [10:0] latched_value;

    always_ff @(posedge clk) begin
        if (ready)
            latched_value <= value;
    end

    // ============================================================
    // Double Dabble FSM
    // ============================================================
    enum { Initialise, Add3, Shift, Result } current_state, next_state;

    logic [3:0] count;
    logic init, add, done;

    logic [3:0]  bcd0, bcd1, bcd2, bcd3;
    logic [10:0] temp_value;

    // -------------------------------
    // FSM next-state logic
    // -------------------------------
    always_comb begin
        case(current_state)
            Initialise: next_state = Add3;
            Add3:       next_state = Shift;
            Shift:      next_state = (count == 10) ? Result : Add3;
            Result:     next_state = Initialise;
            default:    next_state = Initialise;
        endcase
    end

    // -------------------------------
    // FSM sequential
    // -------------------------------
    always_ff @(posedge clk) begin
        current_state <= next_state;
        if (current_state == Shift)
            count <= (count == 10) ? 0 : count + 1;
        else if (current_state == Initialise)
            count <= 0;
    end

    // -------------------------------
    // FSM outputs
    // -------------------------------
    always_comb begin
        init = 1'b0;
        add  = 1'b0;
        done = 1'b0;
        case (current_state)
            Initialise: init = 1'b1;
            Add3:       add  = 1'b1;
            Result:     done = 1'b1;
        endcase
    end

    // -------------------------------
    // Double Dabble shift/add logic
    // -------------------------------
    always_ff @(posedge clk) begin
        if (init) begin
            {bcd3, bcd2, bcd1, bcd0, temp_value} <= {16'b0, latched_value};
        end else begin
            if (add) begin
                bcd0 <= (bcd0 > 4) ? bcd0 + 3 : bcd0;
                bcd1 <= (bcd1 > 4) ? bcd1 + 3 : bcd1;
                bcd2 <= (bcd2 > 4) ? bcd2 + 3 : bcd2;
                bcd3 <= (bcd3 > 4) ? bcd3 + 3 : bcd3;
            end else begin
                {bcd3, bcd2, bcd1, bcd0, temp_value} <= 
                    {bcd3, bcd2, bcd1, bcd0, temp_value} << 1;
            end
        end
    end

    // ============================================================
    // Latch BCD digits only when conversion done
    // ============================================================
    logic [3:0] digit0, digit1, digit2, digit3;

    always_ff @(posedge clk) begin
        if (done) begin
            digit0 <= bcd0;
            digit1 <= bcd1;
            digit2 <= bcd2;
            digit3 <= bcd3;
        end
    end

    // ============================================================
    // Seven-Segment Mapping
    // ============================================================
    seven_seg u_digit0 (.bcd(digit0), .segments(display0));
    seven_seg u_digit1 (.bcd(digit1), .segments(display1));
    seven_seg u_digit2 (.bcd(digit2), .segments(display2));
    seven_seg u_digit3 (.bcd(digit3), .segments(display3));

endmodule
