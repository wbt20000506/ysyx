module ysyx_23060286_Dnpc (
    input [31:0] pc,
    input [31:0] immext,
    input [31:0] rs1data,
    input jalr,
    output [31:0] dnpc
);
    assign dnpc= jalr? rs1data+immext:pc+immext;
endmodule
