//top.v
module pc(
	input clk,
	input rst,
	input jmp_en,
	input jmpr_en,
	input jmpb_en,
	input [31:0]offset,
	output reg [31:0]addr
);

	reg [31:0]next_addr ;

	initial begin addr = 32'h80000000; next_addr = 32'h80000000; end
	
	always@(negedge clk or posedge rst)
		if(rst) next_addr <= 32'h80000000;
		else if(jmp_en) next_addr <= addr + (offset << 1);
		else if(jmpr_en) next_addr <= offset;
		else if(jmpb_en) next_addr <= addr + (offset << 1);
		else next_addr <= addr + 4;
	
	always@(posedge clk or posedge rst)
		if(rst) addr <= 32'h80000000;
		else addr <= next_addr;

endmodule 
 /* Reg #(.WIDTH(32), .RESET_VAL(32'd0)) pc_reg1(
  .clk(clk),
  .rst(rst),
  .din(addr + 32'd4),
  .dout(next_addr),
  .wen(1'b1)
);

  Reg #(.WIDTH(32), .RESET_VAL(32'd0)) pc_reg2(
  .clk(clk),
  .rst(rst),
  .din(next_addr),
  .dout(addr),
  .wen(1'b1)
); */
	



