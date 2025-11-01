module top_level(
	input 	logic 		 CLOCK_50,
	input  	logic        OV7670_PCLK,
	output 	logic        OV7670_XCLK,
	input 	logic        OV7670_VSYNC,
	input  	logic        OV7670_HREF,
	input  	logic [7:0]  OV7670_DATA,
	output 	logic        OV7670_SIOC,
	inout  	wire         OV7670_SIOD,
	output 	logic        OV7670_PWDN,
	output 	logic        OV7670_RESET,
	
	output logic        VGA_HS,
	output logic        VGA_VS,
	output logic [7:0]  VGA_R,
	output logic [7:0]  VGA_G,
	output logic [7:0]  VGA_B,
	output logic        VGA_BLANK_N,
	output logic        VGA_SYNC_N,
	output logic        VGA_CLK,
	output [6:0] HEX0,
	output [6:0] HEX1,
	output [6:0] HEX2,
	output [6:0] HEX3,
	output [7:0] LEDG,
	output [17:0] LEDR,
	input [17:0] SW,
	
	input logic [3:0] KEY

);
	logic sys_reset;
	assign sys_reset = ~KEY[0];

	//Camera and VGA PLL
	logic       clk_video;
	logic 		send_camera_config; assign send_camera_config = !KEY[2];
	logic			video_pll_locked;
	logic 		config_finished;
	assign OV7670_XCLK = clk_video;
	
	video_pll U0(
		 .areset(sys_reset),
		 .inclk0(CLOCK_50),
		 .c0(clk_video),
		 .locked(video_pll_locked)
	);
	
	//Camera programming and data stream
	logic [16:0] wraddress;
	logic [11:0] wrdata;
	logic wren;

	ov7670_controller U1(
		.clk(clk_video),  
		.resend (send_camera_config),
		.config_finished (config_finished),
		.sioc   (OV7670_SIOC),
		.siod   (OV7670_SIOD),
		.reset  (OV7670_RESET),
		.pwdn   (OV7670_PWDN)
	);

	
	ov7670_pixel_capture DUT1 (
	.pclk(OV7670_PCLK),
	.vsync(OV7670_VSYNC),
	.href(OV7670_HREF),
	.d(OV7670_DATA),
	.addr(wraddress),
	.pixel(wrdata),
	.we(wren)
	);



	logic filter_sop_out;
	logic filter_eop_out;
	logic vga_ready;
	logic [11:0] video_data;
	wire vga_blank;  
	wire vga_sync;   


	image_buffer U3
	(
		.data_in(wrdata),
		.rd_clk(clk_video),
		.wr_clk(OV7670_PCLK),
		.ready(vga_ready), 
		.rst(sys_reset),
		.wren(wren),
		.wraddress(wraddress), 
		.image_start(filter_sop_out),
		.image_end(filter_eop_out),
		.data_out(video_data)
	);
	assign VGA_CLK = clk_video;
	
		
	logic [11:0] filtered_data;
	logic        filtered_ready;  // delayed valid (aligned with filtered_data)

	color_filter U4 (
		.clk(clk_video),
		.rst(sys_reset),
		.pixel_in(video_data),
		.in_ready(vga_ready),
		.parcel_color(SW[2:0]),
		.pixel_out(filtered_data),
		.out_ready(filtered_ready)
	);
	
//	logic [3:0] grey_data;
//	logic  		grey_ready;
//	
//	rgb_to_grey U5 (  				//DONE
//		 .clk(clk_video),
//		 .rst(sys_reset),
//		 .pixel_in(filtered_data),
//		 .pixel_out(grey_data),
//		 .in_ready(filtered_ready),
//	    .out_ready(grey_ready)
//	);
	
	logic [3:0] gaussian_data;
	logic 		gaussian_ready;
	gaussian_filter #(
		.IMG_W(640),
		.IMG_H(480)
	) Udenoise (
		.clk(clk_video),
		.rst(sys_reset),
		.pixel_in(filtered_data),
		.pixel_out(gaussian_data),
		.in_ready(filtered_ready),
		.out_ready(gaussian_ready)
	);

	
//	
//	logic [3:0] edge_data;
//	logic 		edge_ready;
////	
////	SOBEL DONE: currently output as 4bit Grey, 3x3 might be too noisy, 5x5 + denoise
//	edge_filter #(
//		.IMG_W(640),
//		.IMG_H(480)
//	) U6 (	 // sobel + denoise after -> then threshold to 1bit greyscale
//		 .clk(clk_video),
//		 .rst(sys_reset),
//		 .pixel_in(gaussian_data),
//		 .pixel_out(edge_data),
//		 .in_ready(gaussian_ready),
//		 .out_ready(edge_ready),
//	);
//
//	
	logic [10:0] centroid_x;
	logic centroid_ready;
	logic line_valid, line_lost;
	
//	DONE: need to test in hardware to determine noise
	calc_centroid #(
        .IMG_W(640),
        .IMG_H(480),
        .ROI_HEIGHT(32),
        .THRESHOLD(2)
    ) U8 (
         .clk(clk_video),
         .rst(sys_reset),
         .pixel_in(gaussian_data),
         .in_ready(gaussian_ready),
			.out_ready(centroid_ready),
         .centroid_x(centroid_x),
         .line_valid(line_valid),
         .line_lost(line_lost)
    );
	 
	 
	 assign LEDG[0] = line_valid;
	 assign LEDG[1] = line_lost;
	 
	 
	 display Udisplay (
			.clk(clk_video),
			.ready(centroid_ready),
			.value(centroid_x),
			.display0(HEX0),
			.display1(HEX1),
			.display2(HEX2),
			.display3(HEX3)
	 );
	 
	 assign LEDR[10:0] = centroid_x;
	 
	 
//	//might need a parameter to choose between 4bit or 1bit for testing
	logic [11:0] rgb_grey_pixel;
	logic rgb_ready;
	
//	DONE
	grey_to_rgb U9 ( 
		 .clk(clk_video),
		 .rst(sys_reset),
		 .pixel_in(gaussian_data),
		 .pixel_out(rgb_grey_pixel),
		 .in_ready(gaussian_ready),
		 .out_ready(rgb_ready)
	);

	vga_driver U10(
		 .clk(clk_video), 
		 .rst(sys_reset),
		 .pixel(rgb_grey_pixel),
		 .hsync(VGA_HS),
		 .vsync(VGA_VS),
		 .r(VGA_R),
		 .g(VGA_G),
		 .b(VGA_B),
	    .VGA_BLANK_N(VGA_BLANK_N),
	    .VGA_SYNC_N(VGA_SYNC_N),
		 .ready(vga_ready)
	);
		
	
endmodule
