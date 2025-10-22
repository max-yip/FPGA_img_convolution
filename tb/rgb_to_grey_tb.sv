`timescale 1ns/1ps
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDSIGNAL */

module rgb_to_grey_tb;

    // Parameters (adjust if needed)
    localparam IMG_W = 640;
    localparam IMG_H = 480;
    localparam NPIX  = IMG_W * IMG_H;

    // Clock + reset
    logic clk;
    logic rst;

    // DUT signals
    logic [11:0] pixel_in;
    logic [3:0]  pixel_out;
    logic        in_ready;
    logic        out_ready;

    // Instantiate DUT
    rgb_to_grey dut (
        .clk(clk),
        .rst(rst),
        .pixel_in(pixel_in),
        .pixel_out(pixel_out),
        .in_ready(in_ready),
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

    // Stimulus
    initial begin
        clk = 0;
        rst = 1;
        in_ready = 0;
        pixel_in = 12'h000;

        // Load input hex image (RGB444)
        $readmemh("image_12bit.hex", img_mem);

        // Release reset
        #20 rst = 0;

        // Open PPM file for writing
        fd = $fopen("output.ppm", "w");
        $fwrite(fd, "P3\n%d %d\n255\n", IMG_W, IMG_H);

        // Send pixels through DUT
        for (i = 0; i < NPIX; i++) begin
            @(posedge clk);
            pixel_in = img_mem[i];
            in_ready = 1;

            // Wait until DUT accepts pixel (handshake)
            wait (out_ready);  
            gray8 = {pixel_out, pixel_out};
            $fwrite(fd, "%0d %0d %0d\n", gray8, gray8, gray8);
        end

        // Stop sending
        @(posedge clk);
        in_ready = 0;


        // Allow pipeline flush
        repeat (50) @(posedge clk);

        // Close file + finish
        $fclose(fd);
        $display("✅ Simulation complete, output written to output.ppm");
        $finish;
    end


endmodule
