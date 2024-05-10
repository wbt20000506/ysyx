module top (
  input clk,
  input rst,
  output [31:0] pc_wire,
  
  output [31:0] rddata_wire,
  output wen_wire,
  output [2:0] alucotrol_wire,
  output [2:0] immtype_wire,
  output [31:0] immext_wire,
  output of_wire,
  output zf_wire,
  output nf_wire,
  output cf_wire,
  /* verilator lint_off UNUSED */
  output [31:0] rs1data_wire,
  input [31:0] inst,
  output [31:0] rs2data_wire
  
  /* verilator lint_on UNUSED */

);
  wire [31:0] snpc_wire;
	Pc PC(clk,rst,snpc_wire,pc_wire);
  Snpc SNPC(pc_wire,snpc_wire);
  RegisterFile GPR(clk,rddata_wire,inst[11:7],inst[19:15],inst[24:20],wen_wire,rs1data_wire,rs2data_wire);
  Idu IDU(inst[6:0],inst[14:12],inst[31:25],inst[31:20],alucotrol_wire,immtype_wire,wen_wire);
  Alu ALU(rs1data_wire,immext_wire,alucotrol_wire,rddata_wire,of_wire,zf_wire,nf_wire,cf_wire);
  Imm IMM(inst,immtype_wire,immext_wire);
endmodule
