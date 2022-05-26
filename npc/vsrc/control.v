module control(
	input [6:0]op,
	input func,
	input pass,
	output wr_en,
	output sub_en,
	output jmp_en,
	output jmpr_en,
	output jmpb_en,
	output lw_en,
	output sw_en
);

	assign wr_en = ((op == 7'b0_110_011)||(op == 7'b0_010_011)||(op == 7'b1_101_111)||(op == 7'b1_100_111)||(op == 7'b0_000_011)) ? 1'b1 : 1'b0;
	assign sub_en = ((op == 7'b0_110_011)&func) ? 1'b1 : 1'b0;
	assign jmp_en = (op == 7'b1_101_111) ? 1'b1 : 1'b0;
	assign jmpr_en = (op == 7'b1_100_111) ? 1'b1 : 1'b0;
	assign jmpb_en = ((op == 7'b1_100_011)&pass) ? 1'b1 : 1'b0;
	assign lw_en = (op == 7'b0_000_011) ? 1'b1 : 1'b0;
	assign sw_en = (op == 7'b0_100_011) ? 1'b1 : 1'b0;

endmodule 

