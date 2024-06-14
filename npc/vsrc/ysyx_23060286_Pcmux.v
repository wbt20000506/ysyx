module ysyx_23060286_Pcmux (
    input [31:0] snpc,
    input [31:0] dnpc,
    input pcsrc,
    output [31:0] next_pc
);
    assign next_pc=(pcsrc ? dnpc:snpc);

endmodule
