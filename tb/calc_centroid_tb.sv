`timescale 1ns/1ps
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off SYNCASYNCNET */

module calc_centroid_tb;

    // Parameters
    localparam IMG_W = 640;
    localparam IMG_H = 480;
    localparam TOTAL_PIXELS = IMG_W*IMG_H;

    // Clock and reset
    logic clk_video;
    logic sys_reset;

    initial begin
        clk_video = 0;
        forever #10 clk_video = ~clk_video; // 50 MHz
    end

    initial begin
        sys_reset = 1;
        #100;
        sys_reset = 0;
    end

    // ---------------------------
    // Image memory
    // ---------------------------
    logic [11:0] video_data;
    logic        vga_ready;

    // Load image into memory
    reg [11:0] image_mem [0:TOTAL_PIXELS-1];
    integer i;
    initial begin
        $readmemh("simulation/image_12bit.hex", image_mem);
        vga_ready = 0;
        i = 0;
    end

    // Feed pixels
    always_ff @(posedge clk_video) begin
        if (!sys_reset) begin
            if (i < TOTAL_PIXELS) begin
                video_data <= image_mem[i];
                vga_ready <= 1;
                i <= i + 1;
            end else begin
                vga_ready <= 0;
            end
        end
    end

    // ---------------------------
    // Wires for modules
    // ---------------------------
    logic [3:0] grey_data;
    logic       grey_ready;

    logic [3:0] edge_data;
    logic       edge_ready;

    logic [$clog2(IMG_W):0] centroid_x;
    logic                     line_valid;
    logic                     line_lost;

    logic [11:0] rgb_grey_pixel;
    logic        rgb_ready;

    // ---------------------------
    // Instantiate modules
    // ---------------------------
    rgb_to_grey U5 (
         .clk(clk_video),
         .rst(sys_reset),
         .pixel_in(video_data),
         .pixel_out(grey_data),
         .in_ready(vga_ready),
         .out_ready(grey_ready)
    );

    edge_filter #(
        .IMG_W(IMG_W),
        .IMG_H(IMG_H)
    ) U6 (
         .clk(clk_video),
         .rst(sys_reset),
         .pixel_in(grey_data),
         .pixel_out(edge_data),
         .in_ready(grey_ready),
         .out_ready(edge_ready)
    );

    calc_centroid #(
        .IMG_W(IMG_W),
        .IMG_H(IMG_H),
        .ROI_HEIGHT(60),
        .THRESHOLD(0)
    ) U8 (
         .clk(clk_video),
         .rst(sys_reset),
         .pixel_in(edge_data),
         .in_ready(edge_ready),
         .centroid_x(centroid_x),
         .line_valid(line_valid),
         .line_lost(line_lost)
        //  .row_centroid_x(),
        //  .row_valid()
    );

    grey_to_rgb U9 (
         .clk(clk_video),
         .rst(sys_reset),
         .pixel_in(edge_data),
         .pixel_out(rgb_grey_pixel),
         .in_ready(edge_ready),
         .out_ready(rgb_ready)
    );

    // ---------------------------
    // PPM file generation
    // ---------------------------
    integer ppm_file;
    integer px_cnt;
    initial begin
        ppm_file = $fopen("simulation/centroid.ppm","w");
        $fwrite(ppm_file,"P3\n%d %d\n255\n", IMG_W, IMG_H);
        px_cnt = 0;
    end

    always_ff @(posedge clk_video) begin
        if (rgb_ready) begin
            // scale 4-bit to 8-bit for RGB
            integer val;
            val = rgb_grey_pixel[11:4]; // simple 4-bit to 8-bit
            $fwrite(ppm_file,"%0d %0d %0d ", val, val, val);
            px_cnt <= px_cnt + 1;
            if (px_cnt % IMG_W == 0) $fwrite(ppm_file,"\n");
        end
    end

    // ---------------------------
    // Monitor centroid
    // ---------------------------
    always_ff @(posedge clk_video) begin
        if (line_valid) begin
            if (line_lost)
                $display("Frame centroid lost!");
            else
                $display("Frame centroid_x = %0d", centroid_x);
        end
    end

    // ---------------------------
    // Finish simulation
    // ---------------------------
    initial begin
        #20000000; // enough time for full frame
        $fclose(ppm_file);
        $display("Simulation done. PPM output saved.");
        $stop;
    end

endmodule
