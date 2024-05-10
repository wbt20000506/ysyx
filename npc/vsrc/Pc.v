module Pc (
    input clk,
    input rst,
    input [31:0] next_pc,
    output [31:0] pc
);
    Reg #(32,32'h80000000) PC_reg(clk,rst,next_pc[31:0],pc[31:0],1'b1);
endmodule
