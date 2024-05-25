module ysyx_23060286_top (
  input clk,
  input rst,
  output [31:0] pc_wire,
  
  output [31:0] rddata_wire,
  output wen_wire,
  output [5:0] alucotrol_wire,
  output [2:0] immtype_wire,
  output [31:0] immext_wire,
  output branch_wire,
  output zero_wire,
  output jump_wire,
  /* verilator lint_off UNUSED */
  output [31:0] rs1data_wire,
  input [31:0] inst,
  output [31:0] rs2data_wire,
  output [31:0] npc_wire
  /* verilator lint_on UNUSED */

);
	ysyx_23060286_Pc PC(clk,rst,npc_wire,pc_wire);
  ysyx_23060286_Snpc SNPC(pc_wire,branch_wire,zero_wire,jump_wire,immext_wire,rs1data_wire,npc_wire);
  ysyx_23060286_RegisterFile GPR(clk,rddata_wire,inst[11:7],inst[19:15],inst[24:20],wen_wire,rs1data_wire,rs2data_wire);
  ysyx_23060286_Idu IDU(inst[6:0],inst[14:12],inst[31:25],alucotrol_wire,immtype_wire,wen_wire);
  ysyx_23060286_Alu ALU(rs1data_wire,rs2data_wire,immext_wire,pc_wire,alucotrol_wire,rddata_wire,jump_wire,branch_wire,zero_wire);
  ysyx_23060286_Imm IMM(inst[31:7],immtype_wire,immext_wire);
endmodule
