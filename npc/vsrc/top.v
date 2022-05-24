//top.v
module  ysyx_22010175_top(
	input clk,
	input rst
);

	wire [31:0]addr;
	wire [31:0]instr;
	wire [31:0]ext_imm;
	wire [31:0]data1;
	wire [31:0]data2;
	wire lw_en;
	wire sw_en;
	wire [31:0]data_mem;

	instr_mem instr_mem_cpu(addr,instr);
	cpu cpu_cpu(clk,rst,data_mem,instr,addr,data1,data2,ext_imm,lw_en,sw_en);
	data_mem data_mem_cpu(ext_imm,data1,data2,lw_en,sw_en,data_mem);
endmodule 