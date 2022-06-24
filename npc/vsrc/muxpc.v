`include "../vsrc/rvseed_defines.v"

module muxpc (
    input                       ena,
    input                       branch,  // branch type 
    input                       zero,    // alu result is zero
    input                       jump,    // jump type 
    input jalr,
    input      [`CPU_WIDTH-1:0] imm,     // immediate  
    input      [`CPU_WIDTH-1:0] curr_pc, // current pc addr
    output reg [`CPU_WIDTH-1:0] next_pc , // next pc addr
    input reg [`CPU_WIDTH-1:0]      reg1_rdata
    );

always @(*) begin
    if (~ena) 
        next_pc = curr_pc;
    else if (branch && ~zero) // bne
        next_pc = curr_pc + imm;
    else if (jump &(!jalr))            // jal 
        next_pc = curr_pc + imm;
    else if (jump &jalr)            // jalr
        next_pc = reg1_rdata + imm;
        
    else 
        next_pc = curr_pc + `CPU_WIDTH'h4;   
end
endmodule
	



