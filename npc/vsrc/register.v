module register(
	input clk,
	input wr_en,
	input [4:0]rs1,
	input [4:0]rs2,
	input [4:0]rd,
	input [31:0]wr_data,
	output [31:0]data1,
	output [31:0]data2
);

	reg [31:0]register[1:31];

	assign data1 = (rs1 != 0) ? register[rs1] : 0;
	assign data2 = (rs2 != 0) ? register[rs2] : 0;
	
	always@(negedge clk)
		if(wr_en) register[rd] <= wr_data;

endmodule 

