//top.v
module wr_data_sel(
	input [31:0]data_out,
	input [31:0]addr,
	input [31:0]data_mem,
	input sel1, //op[4]
	input sel2, //op[6]
	output [31:0]wr_data
);

	assign wr_data = sel1 ? data_out : (sel2 ? (addr + 4) : data_mem);

endmodule 