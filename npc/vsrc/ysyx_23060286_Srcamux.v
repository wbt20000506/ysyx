module ysyx_23060286_Srcamux (
    input [31:0] rs1data,
    input [31:0] pc,
    input auipc,
    output [31:0] srca
);
    assign srca=auipc? pc:rs1data;
endmodule
