//top.v
module data_in2_sel(
	input [31:0]data2,
	input [31:0]ext_imm,
	input sel, //op[5]
	output [31:0]data_in2
);

	assign data_in2 = sel ? data2 : ext_imm;

endmodule 