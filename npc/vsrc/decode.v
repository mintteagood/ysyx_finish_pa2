//top.v
module decode(
	input [31:0]instr,
	output [6:0]op,
	output [4:0]rd,
	output [2:0]func3,
	output [4:0]rs1,
	output [4:0]rs2,
	output func,
	output [11:0]imm,
	output [31:0]jmp
);

	assign op = instr[6:0];
	assign rd = instr[11:7];
	assign func3 = instr[14:12];
	assign rs1 = instr[19:15];
	assign rs2 = instr[24:20];
	assign func = instr[30];
	assign jmp = {{12{instr[31]}},instr[31],instr[19:12],instr[20],instr[30:21]};
	assign imm = instr[31:20]*(op[6]&op[5]&~op[4]&~op[3]&op[2]&op[1]&op[0])+                                   //无条件跳转jalr指令
					 (op[6]&op[5]&~op[4]&~op[3]&~op[2]&op[1]&op[0])*{instr[31],instr[7],instr[30:25],instr[11:8]}+ //有条件跳转指��?
					 (~op[6]&~op[5]&~op[4]&~op[3]&~op[2]&op[1]&op[0])*instr[31:20]+                                //读存储器lw指令
					 (~op[6]&op[5]&~op[4]&~op[3]&~op[2]&op[1]&op[0])*{instr[31:25],instr[11:7]}+                   //写存储器sw指令
					 (~op[6]&~op[5]&op[4]&~op[3]&~op[2]&op[1]&op[0])*instr[31:20];                                 //立即数运算指��?


endmodule 

