module ysyx_23060286_Pc (
    input clk,
    input rst,
    input [31:0] next_pc,
    output [31:0] pc
);
    always @(posedge clk)begin
        if(rst)
            pc<=32'h80000000;
        else
            pc<=next_pc;
    end
endmodule
