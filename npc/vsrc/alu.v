`include "../vsrc/rvseed_defines.v"

module alu(
    input      [`ALU_OP_WIDTH-1:0] alu_op,   // alu opcode
    input      [`CPU_WIDTH-1:0]    alu_src1, // alu source 1
    input      [`CPU_WIDTH-1:0]    alu_src2, // alu source 2
    output reg                     zero,     // alu result is zero
    output reg [`CPU_WIDTH-1:0]    alu_res,   // alu result
    input rd_flag
);

wire [63:0] rd_buf_lw;
always @(*) begin
    zero = 1'b0;
    alu_res = `CPU_WIDTH'b0;
    case (alu_op)
        `ALU_ADD:   //0011
        if(rd_flag == 1'd0)
            alu_res = alu_src1 +  alu_src2;
        else
            alu_res = rd_buf_lw[31:0];
        `ALU_SUB:begin //0100
            alu_res = alu_src1 -  alu_src2;
            zero = (alu_res == `CPU_WIDTH'b0) ? 1'b1 : 1'b0;
        end
        `ALU_SUBN:begin //1100
            alu_res = alu_src1 -  alu_src2;
            zero = (alu_res == `CPU_WIDTH'b0) ? 1'b0 : 1'b1;
        end
        `ALU_SLTU:begin//1001
            if(alu_src1<alu_src2)
                alu_res = 32'd1;
            else
                 alu_res = 32'd0;
        end
        default:begin
            alu_res = alu_src1 -  alu_src2;
            zero = (alu_res == `CPU_WIDTH'b0) ? 1'b1 : 1'b0;
        end
    endcase
end
import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
always @(*) begin
  pmem_read(alu_res, rd_buf_lw);
end
endmodule




