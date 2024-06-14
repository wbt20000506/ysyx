// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_23060286_top__Syms.h"
#include "Vysyx_23060286_top.h"
#include "Vysyx_23060286_top___024root.h"

// FUNCTIONS
Vysyx_23060286_top__Syms::~Vysyx_23060286_top__Syms()
{
}

Vysyx_23060286_top__Syms::Vysyx_23060286_top__Syms(VerilatedContext* contextp, const char* namep,Vysyx_23060286_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_23060286_top.configure(this, name(), "ysyx_23060286_top", "ysyx_23060286_top", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_23060286_top__ALU.configure(this, name(), "ysyx_23060286_top.ALU", "ALU", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_23060286_top__ALUMUX.configure(this, name(), "ysyx_23060286_top.ALUMUX", "ALUMUX", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_23060286_top__DNPC.configure(this, name(), "ysyx_23060286_top.DNPC", "DNPC", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_23060286_top__GRP.configure(this, name(), "ysyx_23060286_top.GRP", "GRP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_23060286_top__IDU.configure(this, name(), "ysyx_23060286_top.IDU", "IDU", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_23060286_top__Imm.configure(this, name(), "ysyx_23060286_top.Imm", "Imm", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_23060286_top__PC.configure(this, name(), "ysyx_23060286_top.PC", "PC", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_23060286_top__PCMUX.configure(this, name(), "ysyx_23060286_top.PCMUX", "PCMUX", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_23060286_top__RESMUX.configure(this, name(), "ysyx_23060286_top.RESMUX", "RESMUX", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_23060286_top__SNPC.configure(this, name(), "ysyx_23060286_top.SNPC", "SNPC", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_23060286_top__SRCA.configure(this, name(), "ysyx_23060286_top.SRCA", "SRCA", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_TOP.varInsert(__Vfinal,"alucontrol", &(TOP.alucontrol), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"aluresult_wire", &(TOP.aluresult_wire), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"alusrc", &(TOP.alusrc), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"auipc", &(TOP.auipc), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"dnpc_wire", &(TOP.dnpc_wire), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"immext_wire", &(TOP.immext_wire), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"immsrc", &(TOP.immsrc), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"inst_wire", &(TOP.inst_wire), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"jalr", &(TOP.jalr), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"memwrite", &(TOP.memwrite), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"npc_wire", &(TOP.npc_wire), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"pc_wire", &(TOP.pc_wire), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"pcsrc", &(TOP.pcsrc), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"readdata_wire", &(TOP.readdata_wire), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"regwrite", &(TOP.regwrite), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"result_wire", &(TOP.result_wire), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"resultsrc", &(TOP.resultsrc), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"rs1data_wire", &(TOP.rs1data_wire), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rs2data_wire", &(TOP.rs2data_wire), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst", &(TOP.rst), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"snpc_wire", &(TOP.snpc_wire), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"srca_wire", &(TOP.srca_wire), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"srcb_wire", &(TOP.srcb_wire), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"zero", &(TOP.zero), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"alucontrol", &(TOP.ysyx_23060286_top__DOT__alucontrol), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"aluresult_wire", &(TOP.ysyx_23060286_top__DOT__aluresult_wire), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"alusrc", &(TOP.ysyx_23060286_top__DOT__alusrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"auipc", &(TOP.ysyx_23060286_top__DOT__auipc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"clk", &(TOP.ysyx_23060286_top__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"dnpc_wire", &(TOP.ysyx_23060286_top__DOT__dnpc_wire), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"immext_wire", &(TOP.ysyx_23060286_top__DOT__immext_wire), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"immsrc", &(TOP.ysyx_23060286_top__DOT__immsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"inst_wire", &(TOP.ysyx_23060286_top__DOT__inst_wire), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"jalr", &(TOP.ysyx_23060286_top__DOT__jalr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"memwrite", &(TOP.ysyx_23060286_top__DOT__memwrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"npc_wire", &(TOP.ysyx_23060286_top__DOT__npc_wire), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"pc_wire", &(TOP.ysyx_23060286_top__DOT__pc_wire), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"pcsrc", &(TOP.ysyx_23060286_top__DOT__pcsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"readdata_wire", &(TOP.ysyx_23060286_top__DOT__readdata_wire), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"regwrite", &(TOP.ysyx_23060286_top__DOT__regwrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"result_wire", &(TOP.ysyx_23060286_top__DOT__result_wire), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"resultsrc", &(TOP.ysyx_23060286_top__DOT__resultsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"rs1data_wire", &(TOP.ysyx_23060286_top__DOT__rs1data_wire), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"rs2data_wire", &(TOP.ysyx_23060286_top__DOT__rs2data_wire), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"rst", &(TOP.ysyx_23060286_top__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"snpc_wire", &(TOP.ysyx_23060286_top__DOT__snpc_wire), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"srca_wire", &(TOP.ysyx_23060286_top__DOT__srca_wire), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"srcb_wire", &(TOP.ysyx_23060286_top__DOT__srcb_wire), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top.varInsert(__Vfinal,"zero", &(TOP.ysyx_23060286_top__DOT__zero), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__ALU.varInsert(__Vfinal,"alucontrol", &(TOP.ysyx_23060286_top__DOT__ALU__DOT__alucontrol), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_ysyx_23060286_top__ALU.varInsert(__Vfinal,"aluresult", &(TOP.ysyx_23060286_top__DOT__ALU__DOT__aluresult), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__ALU.varInsert(__Vfinal,"f3", &(TOP.ysyx_23060286_top__DOT__ALU__DOT__f3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_ysyx_23060286_top__ALU.varInsert(__Vfinal,"srca", &(TOP.ysyx_23060286_top__DOT__ALU__DOT__srca), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__ALU.varInsert(__Vfinal,"srcb", &(TOP.ysyx_23060286_top__DOT__ALU__DOT__srcb), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__ALU.varInsert(__Vfinal,"zero", &(TOP.ysyx_23060286_top__DOT__ALU__DOT__zero), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__ALUMUX.varInsert(__Vfinal,"alusrc", &(TOP.ysyx_23060286_top__DOT__ALUMUX__DOT__alusrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__ALUMUX.varInsert(__Vfinal,"immext", &(TOP.ysyx_23060286_top__DOT__ALUMUX__DOT__immext), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__ALUMUX.varInsert(__Vfinal,"rs2data", &(TOP.ysyx_23060286_top__DOT__ALUMUX__DOT__rs2data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__ALUMUX.varInsert(__Vfinal,"srcb", &(TOP.ysyx_23060286_top__DOT__ALUMUX__DOT__srcb), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__DNPC.varInsert(__Vfinal,"dnpc", &(TOP.ysyx_23060286_top__DOT__DNPC__DOT__dnpc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__DNPC.varInsert(__Vfinal,"immext", &(TOP.ysyx_23060286_top__DOT__DNPC__DOT__immext), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__DNPC.varInsert(__Vfinal,"jalr", &(TOP.ysyx_23060286_top__DOT__DNPC__DOT__jalr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__DNPC.varInsert(__Vfinal,"pc", &(TOP.ysyx_23060286_top__DOT__DNPC__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__DNPC.varInsert(__Vfinal,"rs1data", &(TOP.ysyx_23060286_top__DOT__DNPC__DOT__rs1data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__GRP.varInsert(__Vfinal,"clk", &(TOP.ysyx_23060286_top__DOT__GRP__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__GRP.varInsert(__Vfinal,"r1addr", &(TOP.ysyx_23060286_top__DOT__GRP__DOT__r1addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_ysyx_23060286_top__GRP.varInsert(__Vfinal,"r2addr", &(TOP.ysyx_23060286_top__DOT__GRP__DOT__r2addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_ysyx_23060286_top__GRP.varInsert(__Vfinal,"rddata", &(TOP.ysyx_23060286_top__DOT__GRP__DOT__rddata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__GRP.varInsert(__Vfinal,"rf", &(TOP.ysyx_23060286_top__DOT__GRP__DOT__rf), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
        __Vscope_ysyx_23060286_top__GRP.varInsert(__Vfinal,"rs1data", &(TOP.ysyx_23060286_top__DOT__GRP__DOT__rs1data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__GRP.varInsert(__Vfinal,"rs2data", &(TOP.ysyx_23060286_top__DOT__GRP__DOT__rs2data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__GRP.varInsert(__Vfinal,"waddr", &(TOP.ysyx_23060286_top__DOT__GRP__DOT__waddr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_ysyx_23060286_top__GRP.varInsert(__Vfinal,"wen", &(TOP.ysyx_23060286_top__DOT__GRP__DOT__wen), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__IDU.varInsert(__Vfinal,"alucontrol", &(TOP.ysyx_23060286_top__DOT__IDU__DOT__alucontrol), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_ysyx_23060286_top__IDU.varInsert(__Vfinal,"aluop", &(TOP.ysyx_23060286_top__DOT__IDU__DOT__aluop), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_ysyx_23060286_top__IDU.varInsert(__Vfinal,"alusrc", &(TOP.ysyx_23060286_top__DOT__IDU__DOT__alusrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__IDU.varInsert(__Vfinal,"auipc", &(TOP.ysyx_23060286_top__DOT__IDU__DOT__auipc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__IDU.varInsert(__Vfinal,"branch", &(TOP.ysyx_23060286_top__DOT__IDU__DOT__branch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__IDU.varInsert(__Vfinal,"f3", &(TOP.ysyx_23060286_top__DOT__IDU__DOT__f3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_ysyx_23060286_top__IDU.varInsert(__Vfinal,"f7", &(TOP.ysyx_23060286_top__DOT__IDU__DOT__f7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__IDU.varInsert(__Vfinal,"immsrc", &(TOP.ysyx_23060286_top__DOT__IDU__DOT__immsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_ysyx_23060286_top__IDU.varInsert(__Vfinal,"jalr", &(TOP.ysyx_23060286_top__DOT__IDU__DOT__jalr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__IDU.varInsert(__Vfinal,"jump", &(TOP.ysyx_23060286_top__DOT__IDU__DOT__jump), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__IDU.varInsert(__Vfinal,"memwrite", &(TOP.ysyx_23060286_top__DOT__IDU__DOT__memwrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_ysyx_23060286_top__IDU.varInsert(__Vfinal,"op", &(TOP.ysyx_23060286_top__DOT__IDU__DOT__op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_ysyx_23060286_top__IDU.varInsert(__Vfinal,"pcsrc", &(TOP.ysyx_23060286_top__DOT__IDU__DOT__pcsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__IDU.varInsert(__Vfinal,"regwrite", &(TOP.ysyx_23060286_top__DOT__IDU__DOT__regwrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__IDU.varInsert(__Vfinal,"resultsrc", &(TOP.ysyx_23060286_top__DOT__IDU__DOT__resultsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_ysyx_23060286_top__IDU.varInsert(__Vfinal,"zero", &(TOP.ysyx_23060286_top__DOT__IDU__DOT__zero), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__Imm.varInsert(__Vfinal,"auipc", &(TOP.ysyx_23060286_top__DOT__Imm__DOT__auipc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__Imm.varInsert(__Vfinal,"imm", &(TOP.ysyx_23060286_top__DOT__Imm__DOT__imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,7);
        __Vscope_ysyx_23060286_top__Imm.varInsert(__Vfinal,"immext", &(TOP.ysyx_23060286_top__DOT__Imm__DOT__immext), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__Imm.varInsert(__Vfinal,"immsrc", &(TOP.ysyx_23060286_top__DOT__Imm__DOT__immsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_ysyx_23060286_top__PC.varInsert(__Vfinal,"clk", &(TOP.ysyx_23060286_top__DOT__PC__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__PC.varInsert(__Vfinal,"next_pc", &(TOP.ysyx_23060286_top__DOT__PC__DOT__next_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__PC.varInsert(__Vfinal,"pc", &(TOP.ysyx_23060286_top__DOT__PC__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__PC.varInsert(__Vfinal,"rst", &(TOP.ysyx_23060286_top__DOT__PC__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__PCMUX.varInsert(__Vfinal,"dnpc", &(TOP.ysyx_23060286_top__DOT__PCMUX__DOT__dnpc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__PCMUX.varInsert(__Vfinal,"next_pc", &(TOP.ysyx_23060286_top__DOT__PCMUX__DOT__next_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__PCMUX.varInsert(__Vfinal,"pcsrc", &(TOP.ysyx_23060286_top__DOT__PCMUX__DOT__pcsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__PCMUX.varInsert(__Vfinal,"snpc", &(TOP.ysyx_23060286_top__DOT__PCMUX__DOT__snpc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__RESMUX.varInsert(__Vfinal,"aluresult", &(TOP.ysyx_23060286_top__DOT__RESMUX__DOT__aluresult), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__RESMUX.varInsert(__Vfinal,"readdata", &(TOP.ysyx_23060286_top__DOT__RESMUX__DOT__readdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__RESMUX.varInsert(__Vfinal,"result", &(TOP.ysyx_23060286_top__DOT__RESMUX__DOT__result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__RESMUX.varInsert(__Vfinal,"resultsrc", &(TOP.ysyx_23060286_top__DOT__RESMUX__DOT__resultsrc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_ysyx_23060286_top__RESMUX.varInsert(__Vfinal,"snpc", &(TOP.ysyx_23060286_top__DOT__RESMUX__DOT__snpc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__SNPC.varInsert(__Vfinal,"pc", &(TOP.ysyx_23060286_top__DOT__SNPC__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__SNPC.varInsert(__Vfinal,"snpc", &(TOP.ysyx_23060286_top__DOT__SNPC__DOT__snpc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__SRCA.varInsert(__Vfinal,"auipc", &(TOP.ysyx_23060286_top__DOT__SRCA__DOT__auipc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_ysyx_23060286_top__SRCA.varInsert(__Vfinal,"pc", &(TOP.ysyx_23060286_top__DOT__SRCA__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__SRCA.varInsert(__Vfinal,"rs1data", &(TOP.ysyx_23060286_top__DOT__SRCA__DOT__rs1data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_ysyx_23060286_top__SRCA.varInsert(__Vfinal,"srca", &(TOP.ysyx_23060286_top__DOT__SRCA__DOT__srca), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
    }
}
