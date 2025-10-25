`timescale 1ns/1ps
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDSIGNAL */

module vga_chain_tb;

    // Parameters
    localparam int IMG_W = 640;
    localparam int IMG_H = 480;
    localparam int NPIX  = IMG_W * IMG_H;

    // Clock + reset
    logic clk;
    logic rst;

    // Testbench-side handshake for feeding RGB pixels
    logic        tb_in_ready;
    logic [11:0] tb_pixel_in;

    // Signals between modules
    logic [3:0]  grey_pixel;
    logic        grey_ready;
    logic [3:0]  edge_pixel;
    logic        edge_ready;

    logic [11:0] rgb_pixel;
    logic        rgb_ready;

    // VGA driver outputs
    logic hsync, vsync;
    logic [7:0] rout, gout, bout;
    logic VGA_BLANK_N, VGA_SYNC_N;
    logic vga_ready;

    // Instantiate RGB -> Grey (assumed ports)
    rgb_to_grey rgb2grey (
        .clk       (clk),
        .rst       (rst),
        .pixel_in  (tb_pixel_in),
        .pixel_out (grey_pixel),
        .in_ready  (tb_in_ready),
        .out_ready (grey_ready)
    );

    // Instantiate Edge filter
    edge_filter #(
        .IMG_W(IMG_W),
        .IMG_H(IMG_H)
    ) edge_dut (
        .clk       (clk),
        .rst       (rst),
        .pixel_in  (grey_pixel),
        .pixel_out (edge_pixel),
        .in_ready  (grey_ready),
        .out_ready (edge_ready)
    );

    // Instantiate Grey -> RGB
    grey_to_rgb grey2rgb (
        .clk       (clk),
        .rst       (rst),
        .pixel_in  (edge_pixel),
        .pixel_out (rgb_pixel),
        .in_ready  (edge_ready),
        .out_ready (rgb_ready)
    );

    // Instantiate VGA driver
    // Note: this vga_driver expects pixel and in_ready
    vga_driver vga (
        .clk        (clk),
        .rst        (rst),
        .pixel      (rgb_pixel),
        .hsync      (hsync),
        .vsync      (vsync),
        .r          (rout),
        .g          (gout),
        .b          (bout),
        .VGA_BLANK_N(VGA_BLANK_N),
        .VGA_SYNC_N (VGA_SYNC_N),
        .ready      (vga_ready)
    );

    // Clock generation: 100 MHz style for testbench (period 10ns)
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Reset generation
    initial begin
        rst = 1;
        #100;
        rst = 0;
    end

    // Input image memory (12-bit RGB444 values)
    logic [11:0] img_mem [0:NPIX-1];

    // Output file handle and counters
    integer fd;
    integer pixel_idx;
    integer written_pixels;
    integer cycle_count;

    // Convert 12-bit rgb to 8-bit components for PPM
    logic [7:0] r8, g8, b8;

    // Load image before simulation starts
    initial begin
        // Initialize memory to black to be safe, then overwrite if file present
        integer i;
        for (i = 0; i < NPIX; i = i + 1) img_mem[i] = 12'h000;

        // Attempt to read; if file not found, simulation still runs using black image
        $readmemh("image_12bit.hex", img_mem);
        // if ($test$plusargs("use_image")) begin
        //     $display("Reading image_12bit.hex into img_mem...");
        //     $readmemh("image_12bit.hex", img_mem);
        // end else begin
        //     $display("No image file requested (use +use_image). Using black frame.");
        // end
    end

    // Feed pixels process
    initial begin
        // init
        tb_in_ready = 0;
        tb_pixel_in = 12'h000;
        pixel_idx   = 0;

        // wait for reset release
        wait (rst == 0);

        // Start feeding pixels synchronized to vga_ready.
        // When vga_ready goes high, present one pixel and assert tb_in_ready for one cycle.
        forever begin
            @(posedge clk);
            if (vga_ready) begin
                // present next pixel for exactly one cycle
                if (pixel_idx < NPIX) begin
                    tb_pixel_in = img_mem[pixel_idx];
                    pixel_idx = pixel_idx + 1;
                end else begin
                    tb_pixel_in = 12'h000;
                end
                tb_in_ready = 1;
                @(posedge clk);
                tb_in_ready = 0;
            end
        end
    end

    // Capture/display writer process
    initial begin
        // initialize
        written_pixels = 0;
        cycle_count = 0;

        // open PPM file
        fd = $fopen("edge_vga.ppm", "w");
        if (fd == 0) begin
            $display("ERROR: cannot open output file edge_vga.ppm");
            $finish;
        end
        // PPM header
        $fwrite(fd, "P3\n%0d %0d\n255\n", IMG_W, IMG_H);

        // wait for reset release
        wait (rst == 0);

        // sample outputs whenever rgb_ready asserts (pixel valid)
        forever begin
            @(posedge clk);
            cycle_count = cycle_count + 1;

            if (rgb_ready) begin
                // Expand each 4-bit nibble to 8-bit by replication
                r8 = {rgb_pixel[11:8], rgb_pixel[11:8]};
                g8 = {rgb_pixel[7:4],  rgb_pixel[7:4]};
                b8 = {rgb_pixel[3:0],  rgb_pixel[3:0]};

                $fwrite(fd, "%0d %0d %0d\n", r8, g8, b8);
                written_pixels = written_pixels + 1;

                if (written_pixels == NPIX) begin
                    $fclose(fd);
                    $display("✅ VGA chain simulation complete, output written to edge_vga.ppm");
                    $finish;
                end
            end

            // Safety: timeout to avoid infinite sim in case of bug
            if (cycle_count > 20 * NPIX) begin
                $display("ERROR: simulation timeout after %0d cycles, written %0d pixels", cycle_count, written_pixels);
                $fclose(fd);
                $finish;
            end
        end
    end

endmodule

