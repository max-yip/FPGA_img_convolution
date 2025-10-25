// image_buffer.sv
// Buffer and readout logic for captured camera pixels.
//
// Responsibilities:
// - Accept 12-bit pixels (RGB444: {R[3:0],G[3:0],B[3:0]}) written by the camera-side
//   logic at OV7670 pixel clock domain (wr_clk) and a write address (wraddress).
// - Provide a read interface in the VGA clock domain (rd_clk) that scales the
//   640x480 source (stored as 320x240) to VGA resolution by sampling every
//   second pixel/line (simple nearest-neighbour downscale).
// - Use two BRAM banks (top/bottom) and select based on the MSB of the
//   17-bit address to allow ping-pong style buffering.
/* verilator lint_off WIDTHTRUNC */
module image_buffer
(
	input  logic [11:0] data_in,
	input  logic rd_clk,
	input  logic wr_clk,
	input  logic ready, 
	input  logic rst,
	input  logic wren,
	input  logic [16:0]wraddress, 
	output logic image_start,
	output logic image_end,
	output logic [11:0] data_out
);
  localparam int N_COLS_VGA = 640;
  localparam int N_ROWS_VGA = 480;
	// Read address and VGA counters (rd_clk domain)
	logic [16:0] rdaddress = 0;
	logic [9:0]  x_vga;   // VGA horizontal pixel counter (0..639)
	logic [8:0]  y_vga;   // VGA vertical line counter   (0..479)
	// Source coordinates (after downscale by 2)
	logic [8:0]  x_src;   // source x (0..319)
	logic [7:0]  y_src;   // source y (0..239)

	always_ff @(posedge rd_clk) begin
		if (rst) begin
			 // Reset read pointers and VGA counters
			 rdaddress   <= '0;
			 x_vga       <= '0;
			 y_vga       <= '0;
			 image_start <= 1'b0;
			 image_end   <= 1'b0;
		end else begin
			// Only advance VGA counters when the VGA driver is in the visible area
			if (ready) begin
				if (x_vga < N_COLS_VGA-1) begin
					x_vga <= x_vga + 1;
				end
				else begin
					x_vga <= 0;
					if (y_vga < N_ROWS_VGA-1) begin
						y_vga <= y_vga + 1;
					end
					else begin
						y_vga <= 0;
					end
				end

				// Drive image_start/image_end as level signals tied to rdaddress so
				// they reflect the current read position (clear otherwise).
				image_start <= (rdaddress == '0);
				image_end   <= (rdaddress == N_COLS_VGA*N_ROWS_VGA-1);

				// Simple 2x downscale: source coordinates are VGA coords / 2
				x_src = x_vga[9:1]; // Divide by two
				y_src = y_vga[8:1];

				// Compute linear address: addr = y_src * 320 + x_src
				// (320 = 256 + 64 == (1<<8) + (1<<6))
				rdaddress <= ({9'd0, y_src} << 8) + ({9'd0, y_src} << 6) + {8'd0, x_src};
			end
		end
	end


	// Read data register muxed from the two BRAM banks
	logic [11:0] q;
	wire [11:0] q_top;
	wire [11:0] q_bottom;
	reg wren_top;
	reg wren_bottom;
	
	assign data_out = q;


	image_RAM Inst_buffer_top(
		.data(data_in[11:0]),
		.rdaddress(rdaddress[15:0]),
		.rdclock(rd_clk),
		.wraddress(wraddress[15:0]),
		.wrclock(wr_clk),
		.wren(wren_top),
		.q(q_top)
	);

	image_RAM Inst_buffer_bottom(
		.data(data_in[11:0]),
		.rdaddress(rdaddress[15:0]),
		.rdclock(rd_clk),
		.wraddress(wraddress[15:0]),
		.wrclock(wr_clk),
		.wren(wren_bottom),
		.q(q_bottom)
	);

	// Simple bank-selection for ping-pong style writes. The MSB of the
	// 17-bit write address (wraddress[16]) selects which BRAM instance
	// accepts the write enable. This allows one bank to be read while the
	// other is written to (depending on higher-level control).
	always @(wraddress[16], wren) begin
	  case(wraddress[16])
	    1'b0 : begin
	      wren_top <= wren;
	      wren_bottom <= 1'b0;
	    end
	    1'b1 : begin
	      wren_top <= 1'b0;
	      wren_bottom <= wren;
	    end
	    default : begin
	      wren_top <= 1'b0;
	      wren_bottom <= 1'b0;
	    end
	  endcase
	end

	// Mux read data from the selected bank based on rdaddress MSB
	always @(rdaddress[16], q_top, q_bottom) begin
	  case(rdaddress[16])
	    1'b0 : begin
	      q <= q_top;
	    end
	    1'b1 : begin
	      q <= q_bottom;
	    end
	    default : begin
	      q <= 12'b000000000000;
	    end
	  endcase
	end


endmodule
/* verilator lint_on WIDTHTRUNC */
