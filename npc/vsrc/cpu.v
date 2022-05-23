//top.v
module cpu(
input clk,
	input rst,
	input [31:0]data_mem,
	input [31:0]instr,
	output [31:0]addr,
	output [31:0]data1,
	output [31:0]data2,
	output [31:0]ext_imm,
	output lw_en,
	output sw_en
);

	wire jmp_en;
	wire jmpr_en;
	wire jmpb_en;
	wire [31:0]offset;
	wire [6:0]op;
	wire [4:0]rd;
	wire [2:0]func3;
	wire [4:0]rs1;
	wire [4:0]rs2;
	wire func;
	wire [11:0]imm;
	wire [31:0]jmp;
	wire wr_en;
	wire [31:0]wr_data;
	wire [31:0]data_in2;
	wire sub_en;
	wire [31:0]data_out;
	wire pass;
	
	pc pc_cpu(clk,rst,jmp_en,jmpr_en,jmpb_en,offset,addr);
	decode decode_cpu(instr,op,rd,func3,rs1,rs2,func,imm,jmp);
	register register_cpu(clk,wr_en,rs1,rs2,rd,wr_data,data1,data2);
	alu alu_cpu(data1,data_in2,func3,func,sub_en,data_out);
	control control_cpu(op,func,pass,wr_en,sub_en,jmp_en,jmpr_en,jmpb_en,lw_en,sw_en);
	ext32 ext32_cpu(imm,ext_imm);
	data_in2_sel data_in2_sel_cpu(data2,ext_imm,op[5],data_in2);
	wr_data_sel wr_data_sel_cpu(data_out,addr,data_mem,op[4],op[6],wr_data);
	offset_sel offset_sel_cpu(jmp,ext_imm,data1,op[3:2],offset);
	pass_jud pass_jud_cpu(data1,data2,func3,pass);

endmodule 