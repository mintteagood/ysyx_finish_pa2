module alu(
input [31:0]data_in1,
	input [31:0]data_in2,
	input [2:0]func3,
	input func,
	input sub_en,
	output reg [31:0]data_out
);

	wire [4:0]shamt;
	
	assign shamt = data_in2[4:0];

	always@(*)
		case(func3)
			3'b000: //ADD,SUB,ADDI
				case(sub_en)
					1'b0: data_out <= data_in1 + data_in2;
					1'b1: data_out <= data_in1 - data_in2;
				endcase
			3'b001: data_out <= data_in1 << shamt; //SLL,SLLI
			3'b010: //SLT,SLTI
				if(data_in1[31] > data_in2[31]) data_out <= 32'd1;
				else if(data_in1[31] == data_in2[31])begin
					if(data_in1 < data_in2) data_out <= 32'd1;
					else data_out <= 32'd0;
				end else data_out <= 32'd0;
			3'b011: //SLTU,SLTIU
				if(data_in1 < data_in2) data_out <= 32'd1;
				else data_out <= 32'd0;
			3'b100: data_out <= data_in1 ^ data_in2; //XOR,XORI
			3'b101: //SRL,SRA,SRLI,SRAI
				case(func)
					1'b0: data_out <= data_in1 >> shamt;
					1'b1: data_out <= data_in1 >> shamt;
				endcase
			3'b110: data_out <= data_in1 | data_in2; //OR,ORI
			3'b111: data_out <= data_in1 & data_in2; //AND,ANDI
			default: data_out <= 32'd0;
		endcase
	
endmodule 


