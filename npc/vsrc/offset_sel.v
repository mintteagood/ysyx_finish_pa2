//top.v
module offset_sel(
	input [31:0]jmp,
	input [31:0]ext_imm,
	input [31:0]data1,
	input [1:0]sel, //op[3:2]
	output reg [31:0]offset
);

	always@(*)
		case(sel)
			2'b11: offset = jmp;
			2'b01: offset = ext_imm + data1;
			2'b00: offset = ext_imm;
			default: offset = 32'd0;
		endcase

endmodule 