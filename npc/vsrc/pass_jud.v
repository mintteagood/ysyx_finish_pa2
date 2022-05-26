//top.v
module pass_jud(
	input [31:0]data1,
	input [31:0]data2,
	input [2:0]func3,
	output reg pass
);

	always@(*)
		case(func3)
			3'b000: 
				if(data1 == data2) pass = 1'b1;
				else pass = 1'b0;
			3'b001:
				if(data1 != data2) pass = 1'b1;
				else pass = 1'b0;
			3'b100:
				if(data1[31] > data2[31]) pass = 1'd1;
				else if(data1[31] == data2[31])begin
					if(data1 < data2) pass = 1'd1;
					else pass = 1'd0;
				end else pass = 1'd0;
			3'b101:
				if(data1[31] > data2[31]) pass = 1'd0;
				else if(data1[31] == data2[31])begin
					if(data1 < data2) pass = 1'd0;
					else pass = 1'd1;
				end else pass = 1'd1;
			3'b110:
				if(data1 < data2) pass = 1'b1;
				else pass = 1'b0;
			3'b111:
				if(data1 < data2) pass = 1'b0;
				else pass = 1'b1;
			default: pass = 1'b0;
		endcase

endmodule 