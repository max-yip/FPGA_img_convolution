`timescale 1ns/1ps
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off PROCASSINIT */
/* verilator lint_off SYNCASYNCNET */

module edge_filter_tb;

    // Parameters
    localparam IMG_W = 640;
    localparam IMG_H = 480;
    localparam NPIX  = IMG_W * IMG_H;

    // Clock + reset
    logic clk;
    logic rst;

    // DUT signals
    logic [11:0] pixel_in;
    logic [3:0]  pixel_grey;
    logic [3:0]  pixel_edge;   // 4-bit edge output
    logic        in_ready;
    logic        grey_ready;
    logic        out_ready;

    // Instantiate RGB to Grey converter
    rgb_to_grey rgb_dut (
        .clk(clk),
        .rst(rst),
        .pixel_in(pixel_in),
        .pixel_out(pixel_grey),
        .in_ready(in_ready),
        .out_ready(grey_ready)
    );

    // Instantiate Edge filter
    edge_filter #(
        .IMG_W(IMG_W),
        .IMG_H(IMG_H)
    ) edge_dut (
        .clk(clk),
        .rst(rst),
        .pixel_in(pixel_grey), // 4-bit input
        .pixel_out(pixel_edge), // 4-bit output
        .in_ready(grey_ready),
        .out_ready(out_ready)
    );

    // Clock generation (100MHz) => 10ns period
    always #5 clk = ~clk;

    // Input image memory
    logic [11:0] img_mem [0:NPIX-1];

    // Output file handle
    integer fd;
    integer i;
    integer gray8;

    // ===========================
    // Latency Measurement Logic
    // ===========================
    integer cycle_count;
    integer first_in_cycle;
    integer first_out_cycle;
    bit     in_seen = 0;
    bit     out_seen = 0;

    // Cycle counter
    always @(posedge clk) begin
        if (rst)
            cycle_count <= 0;
        else
            cycle_count <= cycle_count + 1;
    end

    // Record timing of first input/output
    always @(posedge clk) begin
        if (!rst) begin
            if (in_ready && !in_seen) begin
                first_in_cycle <= cycle_count;
                in_seen <= 1;
            end
            if (out_ready && !out_seen) begin
                first_out_cycle <= cycle_count;
                out_seen <= 1;
                $display("✅ First input seen at cycle %0d", first_in_cycle);
                $display("✅ First output seen at cycle %0d", first_out_cycle);
                $display("📏 Pipeline latency = %0d cycles", first_out_cycle - first_in_cycle);
                $display("⏱ In time units = %0d ns", (first_out_cycle - first_in_cycle) * 10);
            end
        end
    end

    // ===========================
    // Stimulus
    // ===========================
    initial begin
        clk = 0;
        rst = 1;
        in_ready = 0;
        pixel_in = 12'h000;

        // Load input hex image (RGB444)
        $readmemh("image_12bit.hex", img_mem);

        // Release reset after a few cycles
        #20 rst = 0;

        // Open PPM file
        fd = $fopen("edge.ppm", "w");
        $fwrite(fd, "P3\n%d %d\n255\n", IMG_W, IMG_H);

        // Feed pixels into pipeline
        for (i = 0; i < NPIX; i = i + 1) begin
            @(posedge clk);
            pixel_in = img_mem[i];
            in_ready = 1;
            @(posedge clk);
            in_ready = 0;

            if (out_ready) begin
                gray8 = {pixel_edge, pixel_edge};
                $fwrite(fd, "%0d %0d %0d\n", gray8, gray8, gray8);
            end
        end

        // Extra pixels to flush the pipeline
        repeat (2) begin
            @(posedge clk);
            pixel_in = 0;
            in_ready = 1;
            @(posedge clk);
            in_ready = 0;

            if (out_ready) begin
                gray8 = 0;
                $fwrite(fd, "%0d %0d %0d\n", gray8, gray8, gray8);
            end
        end

        // Allow remaining pixels to flush
        repeat (IMG_W*3) @(posedge clk);

        // Close file + finish
        $fclose(fd);
        $display("✅ Simulation complete, output written to edge.ppm");
        $finish;
    end

endmodule
