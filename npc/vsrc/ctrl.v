`include "../vsrc/rvseed_defines.v"

module ctrl (
    input      [`CPU_WIDTH-1:0]        inst,       // instruction input

    output reg                         branch,     // branch flag
    output reg                         jump,       // jump flag

    output reg                         reg_wen,    // register write enable
    output reg [`REG_ADDR_WIDTH-1:0]   reg_waddr,  // register write address
    output reg [`REG_ADDR_WIDTH-1:0]   reg1_raddr, // register 1 read address
    output reg [`REG_ADDR_WIDTH-1:0]   reg2_raddr, // register 2 read address
    
    output reg [`IMM_GEN_OP_WIDTH-1:0] imm_gen_op, // immediate extend opcode

    output reg [`ALU_OP_WIDTH-1:0]     alu_op,     // alu opcode
    output reg [`ALU_SRC_WIDTH-1:0]    alu_src_sel ,// alu source select flag
    output [`CPU_WIDTH-1:0]            unknown_code,
    output    jalr
);

wire [`OPCODE_WIDTH-1:0] opcode = inst[`OPCODE_WIDTH-1:0];          //  [6:0]
wire [`FUNCT3_WIDTH-1:0] funct3 = inst[`FUNCT3_WIDTH+`FUNCT3_BASE-1:`FUNCT3_BASE];  //   [3+12-1:12] [14:12]
wire [`FUNCT7_WIDTH-1:0] funct7 = inst[`FUNCT7_WIDTH+`FUNCT7_BASE-1:`FUNCT7_BASE];  // [31:25]
wire [`REG_ADDR_WIDTH-1:0] rd   = inst[`REG_ADDR_WIDTH+`RD_BASE-1:`RD_BASE];   //[5+7-1:7]  [11:7]
wire [`REG_ADDR_WIDTH-1:0] rs1  = inst[`REG_ADDR_WIDTH+`RS1_BASE-1:`RS1_BASE];  //[19:15]
wire [`REG_ADDR_WIDTH-1:0] rs2  = inst[`REG_ADDR_WIDTH+`RS2_BASE-1:`RS2_BASE];   //[24:20]


always @(*) begin
    branch      = 1'b0;
    jump        = 1'b0;
    reg_wen     = 1'b0;
    jalr = 1'b0;
    reg1_raddr  = `REG_ADDR_WIDTH'b0;
    reg2_raddr  = `REG_ADDR_WIDTH'b0;
    reg_waddr   = `REG_ADDR_WIDTH'b0;
    imm_gen_op  = `IMM_GEN_I;
    alu_op      = `ALU_AND;
    alu_src_sel = `ALU_SRC_REG;
    unknown_code = 32'd0;
    case (opcode)
        `INST_TYPE_R: begin                         
            reg_wen     = 1'b1;
            reg1_raddr  = rs1;
            reg2_raddr  = rs2;
            reg_waddr   = rd;
            alu_src_sel = `ALU_SRC_REG;
            case (funct3)
                `INST_ADD_SUB: 
                    alu_op = (funct7 == `FUNCT7_INST_A) ? `ALU_ADD : `ALU_SUB; // A:add B:sub 
                default:unknown_code = inst;
            endcase
        end
        `INST_TYPE_I: begin
            reg_wen     = 1'b1;
            reg1_raddr  = rs1;
            reg_waddr   = rd;
            alu_src_sel = `ALU_SRC_IMM;
            case (funct3)
                `INST_ADDI: 
                    alu_op = `ALU_ADD; 
                default:unknown_code = inst;
            endcase
        end
        `INST_TYPE_B: begin
            reg1_raddr  = rs1;
            reg2_raddr  = rs2;
            imm_gen_op  = `IMM_GEN_B;
            alu_src_sel = `ALU_SRC_REG;
            case (funct3)
                `INST_BNE: begin
                    branch     = 1'b1;
                    alu_op     = `ALU_SUB;
                end
                 default:unknown_code = inst;
            endcase
        end
        0100011:begin    //sd
            case(funct3)
            3'b011:begin
            jump        = 1'b0;
            reg_wen     = 1'b1;
            jalr = 1'b0;
            reg1_raddr  = rs1;
            reg2_raddr  = rs2;
            reg_waddr   = rs2;
            imm_gen_op  = `INST_TYPE_S;
            alu_src_sel = `ALU_SRC_IMM;
            end
            default:unknown_code = inst;
            endcase
        end
        `INST_JAL: begin // only jal 
            jump        = 1'b1;
            reg_wen     = 1'b1;
            jalr = 1'b0;
            reg_waddr   = rd;
            imm_gen_op  = `IMM_GEN_J;
            alu_op      = `ALU_ADD;
            alu_src_sel = `ALU_SRC_FOUR_PC; //pc + 4
        end
        `INST_LUI: begin // only lui
                reg_wen     = 1'b1;
                reg1_raddr  = `REG_ADDR_WIDTH'b0; // x0 = 0
                reg_waddr   = rd;
                imm_gen_op  = `IMM_GEN_U;
                alu_op      = `ALU_ADD;
                alu_src_sel = `ALU_SRC_IMM; // x0 + imm
        end
        `INST_AUIPC:begin //only auipc
                reg_wen     = 1'b1;
                reg1_raddr  = `REG_ADDR_WIDTH'b0; // x0 = 0
                reg_waddr   = rd;
                imm_gen_op  = `IMM_GEN_U;
                alu_op      = `ALU_ADD;
                alu_src_sel = `ALU_SRC_IMM_PC; // x0 + imm
        end
        1100111:begin
            case(funct3)  
                3'b000:begin         //jalr
                jump        = 1'b1;
                reg_wen     = 1'b1;
                jalr = 1'b1;
                reg_waddr   = rd;
                imm_gen_op  = `IMM_GEN_I;
                alu_op      = `ALU_ADD;
                alu_src_sel = `ALU_SRC_FOUR_PC; //pc + 4
                end
                default:unknown_code = inst+1;
            endcase

        end
        
        default:unknown_code = inst;
    endcase 
end

import "DPI-C" function void ebreak();
always@(*)begin
    if(inst == 32'h0010_0073)
        ebreak();
end

import "DPI-C" function void unknown_inst();
always@(*)begin
    if(unknown_code != 32'd0)
        unknown_inst();
end

endmodule
