//top.v
module ext32(
	input [11:0]imm,
	output [31:0]ext_imm
);

	assign ext_imm = {{20{imm[11]}},imm};

endmodule 