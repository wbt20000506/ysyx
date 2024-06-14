module ysyx_23060286_top (
  input clk,
  input rst,
  /* verilator lint_off UNDRIVEN */
  input [31:0] inst_wire,
  /* verilator lint_off UNDRIVEN */
  input [31:0] readdata_wire,
  output [31:0] npc_wire,pc_wire,snpc_wire,rs1data_wire,rs2data_wire,immext_wire,srcb_wire,aluresult_wire,dnpc_wire,result_wire,srca_wire,
  output pcsrc,alusrc,regwrite,zero,jalr,auipc,
  output [1:0] resultsrc,immsrc,
  output [3:0] memwrite,
  output [3:0] alucontrol
);
	ysyx_23060286_Alu ALU(srca_wire,srcb_wire,alucontrol,inst_wire[14:12],zero,aluresult_wire);
  ysyx_23060286_Srcamux SRCA(rs1data_wire,pc_wire,auipc,srca_wire);
  ysyx_23060286_Alumux ALUMUX(rs2data_wire,immext_wire,alusrc,srcb_wire);
  ysyx_23060286_Dnpc DNPC(pc_wire,immext_wire,rs1data_wire,jalr,dnpc_wire);
  ysyx_23060286_Idu IDU(inst_wire[6:0],inst_wire[14:12],inst_wire[30],zero,jalr,pcsrc,resultsrc,memwrite,alucontrol,alusrc,immsrc,regwrite,auipc);
  ysyx_23060286_Imm Imm(inst_wire[31:7],auipc,immsrc,immext_wire);
  ysyx_23060286_Pc PC(clk,rst,npc_wire,pc_wire);
  ysyx_23060286_Pcmux PCMUX(snpc_wire,dnpc_wire,pcsrc,npc_wire);
  ysyx_23060286_RegisterFile GRP(clk,result_wire,inst_wire[11:7],inst_wire[19:15],inst_wire[24:20],regwrite,rs1data_wire,rs2data_wire);
  ysyx_23060286_Resultmux RESMUX(aluresult_wire,readdata_wire,snpc_wire,resultsrc,result_wire);
  ysyx_23060286_Snpc SNPC(pc_wire,snpc_wire);
endmodule
