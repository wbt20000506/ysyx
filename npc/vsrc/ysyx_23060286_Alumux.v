module ysyx_23060286_Alumux (
    input [31:0] rs2data,
    input [31:0] immext,
    input alusrc,
    output [31:0] srcb
);
    assign srcb=(alusrc ? immext:rs2data);
endmodule
