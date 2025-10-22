`timescale 1ns/1ps
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDSIGNAL */

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
        .grey_data(pixel_grey), // 4-bit input
        .edge_data(pixel_edge), // 4-bit output
        .in_ready(grey_ready),
        .out_ready(out_ready)
    );

    // Clock generation (100MHz)
    always #5 clk = ~clk;

    // Input image memory
    logic [11:0] img_mem [0:NPIX-1];

    // Output file handle
    integer fd;
    integer i;
    integer gray8;

    // -----------------------------
    // Stimulus
    // -----------------------------
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

        // -----------------------------
        // Feed pixels into pipeline
        // -----------------------------
        for (i = 0; i < NPIX; i = i + 1) begin
            // Apply pixel to RGB->Grey
            @(posedge clk);
            pixel_in = img_mem[i];
            in_ready = 1;
            @(posedge clk);
            in_ready = 0;

            // Wait until edge_filter produces valid output
            if (out_ready) begin
                // Convert 4-bit edge to 8-bit for PPM
                gray8 = {pixel_edge, pixel_edge}; // upscale 4->8 bits
                $fwrite(fd, "%0d %0d %0d\n", gray8, gray8, gray8);
            end
        end

        // -----------------------------
        // Add two extra empty pixels at the end
        // -----------------------------
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

        // Allow pipeline to flush last pixels
        repeat (IMG_W*3) @(posedge clk);

        // Close file + finish
        $fclose(fd);
        $display("✅ Simulation complete, output written to edge.ppm");
        $finish;
    end

endmodule
