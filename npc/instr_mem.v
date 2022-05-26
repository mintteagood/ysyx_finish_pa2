//top.v
module instr_mem(
	input [31:0]addr,
	output reg [31:0]instr
);

	reg [7:0]instr_mem[0:31];
	
	initial $readmemb("cpu.txt",instr_mem);
	
	always@(addr)begin
		instr[7:0] = instr_mem[addr+3];
		instr[15:8] = instr_mem[addr+2];
		instr[23:16] = instr_mem[addr+1];
		instr[31:24] = instr_mem[addr];
	end

endmodule  