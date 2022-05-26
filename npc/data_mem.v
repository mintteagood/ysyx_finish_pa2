module data_mem(
	input [31:0]ext_imm,
	input [31:0]data1,
	input [31:0]data2,
	input lw_en,
	input sw_en,
	output reg [31:0]data_mem
);

	wire [31:0]addr;

	reg [7:0]data[0:31];
	
	assign addr = ext_imm + data1;
	
	always@(lw_en)begin
		data_mem[7:0] = data[addr];
		data_mem[15:8] = data[addr+1];
		data_mem[23:16] = data[addr+2];
		data_mem[31:24] = data[addr+3];
	end
	
	always@(sw_en)begin
		data[addr+3] = data2[7:0];
		data[addr+2] = data2[15:8];
		data[addr+1] = data2[23:16];
		data[addr] = data2[31:24];
	end

endmodule 
