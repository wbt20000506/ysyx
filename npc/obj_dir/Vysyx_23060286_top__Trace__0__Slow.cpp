// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vysyx_23060286_top__Syms.h"


VL_ATTR_COLD void Vysyx_23060286_top___024root__trace_init_sub__TOP__0(Vysyx_23060286_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("ysyx_23060286_top ");
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBus(c+282,"pc_wire", false,-1, 31,0);
    tracep->declBus(c+60,"rddata_wire", false,-1, 31,0);
    tracep->declBit(c+61,"wen_wire", false,-1);
    tracep->declBus(c+62,"alucotrol_wire", false,-1, 5,0);
    tracep->declBus(c+63,"immtype_wire", false,-1, 2,0);
    tracep->declBus(c+64,"immext_wire", false,-1, 31,0);
    tracep->declBit(c+65,"branch_wire", false,-1);
    tracep->declBit(c+66,"zero_wire", false,-1);
    tracep->declBit(c+67,"jump_wire", false,-1);
    tracep->declBus(c+68,"rs1data_wire", false,-1, 31,0);
    tracep->declBus(c+69,"inst", false,-1, 31,0);
    tracep->declBus(c+70,"rs2data_wire", false,-1, 31,0);
    tracep->declBus(c+71,"npc_wire", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+68,"rs1", false,-1, 31,0);
    tracep->declBus(c+70,"rs2", false,-1, 31,0);
    tracep->declBus(c+64,"imm", false,-1, 31,0);
    tracep->declBus(c+282,"pc", false,-1, 31,0);
    tracep->declBus(c+62,"alucontrol", false,-1, 5,0);
    tracep->declBus(c+60,"result", false,-1, 31,0);
    tracep->declBit(c+67,"jump", false,-1);
    tracep->declBit(c+65,"branch", false,-1);
    tracep->declBit(c+66,"zero", false,-1);
    tracep->declBus(c+72,"add", false,-1, 31,0);
    tracep->declBus(c+73,"sub", false,-1, 31,0);
    tracep->declBus(c+74,"sll", false,-1, 31,0);
    tracep->declBus(c+75,"slt", false,-1, 31,0);
    tracep->declBus(c+76,"sltu", false,-1, 31,0);
    tracep->declBus(c+77,"xor_", false,-1, 31,0);
    tracep->declBus(c+78,"srl", false,-1, 31,0);
    tracep->declBus(c+79,"sra", false,-1, 31,0);
    tracep->declBus(c+80,"or_", false,-1, 31,0);
    tracep->declBus(c+81,"and_", false,-1, 31,0);
    tracep->declBus(c+82,"addi", false,-1, 31,0);
    tracep->declBus(c+83,"slti", false,-1, 31,0);
    tracep->declBus(c+84,"sltiu", false,-1, 31,0);
    tracep->declBus(c+85,"xori", false,-1, 31,0);
    tracep->declBus(c+86,"ori", false,-1, 31,0);
    tracep->declBus(c+87,"andi", false,-1, 31,0);
    tracep->declBus(c+88,"slli", false,-1, 31,0);
    tracep->declBus(c+89,"srli", false,-1, 31,0);
    tracep->declBus(c+90,"srai", false,-1, 31,0);
    tracep->declBus(c+91,"lui", false,-1, 31,0);
    tracep->declBus(c+317,"auipc", false,-1, 31,0);
    tracep->declBus(c+283,"jal", false,-1, 31,0);
    tracep->declBus(c+92,"jalr", false,-1, 31,0);
    tracep->pushNamePrefix("alu_mux ");
    tracep->declBus(c+318,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+319,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+320,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+321,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+60,"out", false,-1, 31,0);
    tracep->declBus(c+62,"key", false,-1, 5,0);
    tracep->declBus(c+322,"default_out", false,-1, 31,0);
    tracep->declArray(c+93,"lut", false,-1, 873,0);
    tracep->declBus(c+323,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 23; ++i) {
        tracep->declQuad(c+121+i*2,"pair_list", true,(i+0), 37,0);
    }
    for (int i = 0; i < 23; ++i) {
        tracep->declBus(c+167+i*1,"key_list", true,(i+0), 5,0);
    }
    for (int i = 0; i < 23; ++i) {
        tracep->declBus(c+190+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+213,"lut_out", false,-1, 31,0);
    tracep->declBit(c+214,"hit", false,-1);
    tracep->declBus(c+324,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR ");
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBus(c+60,"rddata", false,-1, 31,0);
    tracep->declBus(c+215,"waddr", false,-1, 4,0);
    tracep->declBus(c+216,"r1addr", false,-1, 4,0);
    tracep->declBus(c+217,"r2addr", false,-1, 4,0);
    tracep->declBit(c+61,"wen", false,-1);
    tracep->declBus(c+68,"rs1data", false,-1, 31,0);
    tracep->declBus(c+70,"rs2data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+284+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+218,"op", false,-1, 6,0);
    tracep->declBus(c+219,"f3", false,-1, 2,0);
    tracep->declBus(c+220,"f7", false,-1, 6,0);
    tracep->declBus(c+62,"alucotrol", false,-1, 5,0);
    tracep->declBus(c+63,"immtype", false,-1, 2,0);
    tracep->declBit(c+61,"regwrite", false,-1);
    tracep->pushNamePrefix("aluctrl_mux ");
    tracep->declBus(c+325,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+326,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+319,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+321,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+62,"out", false,-1, 5,0);
    tracep->declBus(c+221,"key", false,-1, 16,0);
    tracep->declBus(c+327,"default_out", false,-1, 5,0);
    tracep->declArray(c+328,"lut", false,-1, 1080,0);
    tracep->declBus(c+318,"PAIR_LEN", false,-1, 31,0);
    tracep->declBus(c+222,"lut_out", false,-1, 5,0);
    tracep->declBit(c+223,"hit", false,-1);
    tracep->declBus(c+362,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("opmux ");
    tracep->declBus(c+363,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+364,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+365,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+321,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+63,"out", false,-1, 2,0);
    tracep->declBus(c+218,"key", false,-1, 6,0);
    tracep->declBus(c+366,"default_out", false,-1, 2,0);
    tracep->declArray(c+367,"lut", false,-1, 109,0);
    tracep->declBus(c+371,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+23+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+224,"lut_out", false,-1, 2,0);
    tracep->declBit(c+225,"hit", false,-1);
    tracep->declBus(c+372,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regwrite_mux ");
    tracep->declBus(c+373,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+364,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+321,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+321,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+61,"out", false,-1, 0,0);
    tracep->declBus(c+218,"key", false,-1, 6,0);
    tracep->declBus(c+374,"default_out", false,-1, 0,0);
    tracep->declQuad(c+375,"lut", false,-1, 63,0);
    tracep->declBus(c+373,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+34+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+42+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+50+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+226,"lut_out", false,-1, 0,0);
    tracep->declBit(c+227,"hit", false,-1);
    tracep->declBus(c+377,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IMM ");
    tracep->declBus(c+228,"inst", false,-1, 31,7);
    tracep->declBus(c+63,"immtype", false,-1, 2,0);
    tracep->declBus(c+64,"immext", false,-1, 31,0);
    tracep->declBus(c+229,"immI", false,-1, 31,0);
    tracep->declBus(c+230,"immS", false,-1, 31,0);
    tracep->declBus(c+231,"immB", false,-1, 31,0);
    tracep->declBus(c+232,"immU", false,-1, 31,0);
    tracep->declBus(c+233,"immJ", false,-1, 31,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+365,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+320,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+321,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+64,"out", false,-1, 31,0);
    tracep->declBus(c+63,"key", false,-1, 2,0);
    tracep->declBus(c+322,"default_out", false,-1, 31,0);
    tracep->declArray(c+234,"lut", false,-1, 174,0);
    tracep->declBus(c+379,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+240+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+250+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+255+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+260,"lut_out", false,-1, 31,0);
    tracep->declBit(c+261,"hit", false,-1);
    tracep->declBus(c+380,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBus(c+71,"next_pc", false,-1, 31,0);
    tracep->declBus(c+282,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("PC_reg ");
    tracep->declBus(c+320,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+381,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"rst", false,-1);
    tracep->declBus(c+71,"din", false,-1, 31,0);
    tracep->declBus(c+282,"dout", false,-1, 31,0);
    tracep->declBit(c+382,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SNPC ");
    tracep->declBus(c+282,"pc", false,-1, 31,0);
    tracep->declBit(c+65,"branch", false,-1);
    tracep->declBit(c+66,"zero", false,-1);
    tracep->declBit(c+67,"jump", false,-1);
    tracep->declBus(c+64,"imm", false,-1, 31,0);
    tracep->declBus(c+68,"rs1data", false,-1, 31,0);
    tracep->declBus(c+71,"npc", false,-1, 31,0);
    tracep->declBus(c+316,"snpc", false,-1, 31,0);
    tracep->declBus(c+262,"dnpcjal", false,-1, 31,0);
    tracep->declBus(c+92,"dnpcjalr", false,-1, 31,0);
    tracep->pushNamePrefix("snpc_mux ");
    tracep->declBus(c+365,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+365,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+320,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+321,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+71,"out", false,-1, 31,0);
    tracep->declBus(c+263,"key", false,-1, 2,0);
    tracep->declBus(c+316,"default_out", false,-1, 31,0);
    tracep->declArray(c+264,"lut", false,-1, 104,0);
    tracep->declBus(c+379,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+268+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+274+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+277+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+280,"lut_out", false,-1, 31,0);
    tracep->declBit(c+281,"hit", false,-1);
    tracep->declBus(c+383,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vysyx_23060286_top___024root__trace_init_top(Vysyx_23060286_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_23060286_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_23060286_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060286_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060286_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_23060286_top___024root__trace_register(Vysyx_23060286_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_23060286_top___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&Vysyx_23060286_top___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&Vysyx_23060286_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_23060286_top___024root__trace_full_sub_0(Vysyx_23060286_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_23060286_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_23060286_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060286_top___024root*>(voidSelf);
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_23060286_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<34>/*1087:0*/ Vysyx_23060286_top__ConstPool__CONST_h6fe14cef_0;

VL_ATTR_COLD void Vysyx_23060286_top___024root__trace_full_sub_0(Vysyx_23060286_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h21498232__0;
    // Body
    bufp->fullSData(oldp+1,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+2,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+3,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+4,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+5,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+6,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+7,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+8,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[7]),10);
    bufp->fullSData(oldp+9,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[8]),10);
    bufp->fullSData(oldp+10,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[9]),10);
    bufp->fullSData(oldp+11,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[10]),10);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[0]),7);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[1]),7);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[2]),7);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[3]),7);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[4]),7);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[5]),7);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[6]),7);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[7]),7);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[8]),7);
    bufp->fullCData(oldp+21,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[9]),7);
    bufp->fullCData(oldp+22,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[10]),7);
    bufp->fullCData(oldp+23,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[0]),3);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[1]),3);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[2]),3);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[3]),3);
    bufp->fullCData(oldp+27,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[4]),3);
    bufp->fullCData(oldp+28,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[5]),3);
    bufp->fullCData(oldp+29,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[6]),3);
    bufp->fullCData(oldp+30,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[7]),3);
    bufp->fullCData(oldp+31,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[8]),3);
    bufp->fullCData(oldp+32,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[9]),3);
    bufp->fullCData(oldp+33,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[10]),3);
    bufp->fullCData(oldp+34,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+35,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+36,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+37,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list[3]),8);
    bufp->fullCData(oldp+38,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list[4]),8);
    bufp->fullCData(oldp+39,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list[5]),8);
    bufp->fullCData(oldp+40,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list[6]),8);
    bufp->fullCData(oldp+41,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list[7]),8);
    bufp->fullCData(oldp+42,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list[0]),7);
    bufp->fullCData(oldp+43,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list[1]),7);
    bufp->fullCData(oldp+44,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list[2]),7);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list[3]),7);
    bufp->fullCData(oldp+46,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list[4]),7);
    bufp->fullCData(oldp+47,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list[5]),7);
    bufp->fullCData(oldp+48,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list[6]),7);
    bufp->fullCData(oldp+49,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list[7]),7);
    bufp->fullBit(oldp+50,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list[0]));
    bufp->fullBit(oldp+51,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list[1]));
    bufp->fullBit(oldp+52,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list[2]));
    bufp->fullBit(oldp+53,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list[3]));
    bufp->fullBit(oldp+54,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list[4]));
    bufp->fullBit(oldp+55,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list[5]));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list[6]));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list[7]));
    bufp->fullBit(oldp+58,(vlSelf->__Vcellinp__ysyx_23060286_top__clk));
    bufp->fullBit(oldp+59,(vlSelf->__Vcellinp__ysyx_23060286_top__rst));
    bufp->fullIData(oldp+60,(vlSelf->__Vcellout__ysyx_23060286_top__rddata_wire),32);
    bufp->fullBit(oldp+61,(vlSelf->__Vcellout__ysyx_23060286_top__wen_wire));
    bufp->fullCData(oldp+62,(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire),6);
    bufp->fullCData(oldp+63,(vlSelf->__Vcellout__ysyx_23060286_top__immtype_wire),3);
    bufp->fullIData(oldp+64,(vlSelf->__Vcellout__ysyx_23060286_top__immext_wire),32);
    bufp->fullBit(oldp+65,(vlSelf->__Vcellout__ysyx_23060286_top__branch_wire));
    bufp->fullBit(oldp+66,(vlSelf->__Vcellout__ysyx_23060286_top__zero_wire));
    bufp->fullBit(oldp+67,(vlSelf->__Vcellout__ysyx_23060286_top__jump_wire));
    bufp->fullIData(oldp+68,(vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire),32);
    bufp->fullIData(oldp+69,(vlSelf->__Vcellinp__ysyx_23060286_top__inst),32);
    bufp->fullIData(oldp+70,(vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire),32);
    bufp->fullIData(oldp+71,(vlSelf->__Vcellout__ysyx_23060286_top__npc_wire),32);
    bufp->fullIData(oldp+72,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                              + vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)),32);
    bufp->fullIData(oldp+73,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                              - vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)),32);
    bufp->fullIData(oldp+74,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                              << (0x1fU & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))),32);
    bufp->fullIData(oldp+75,((VL_LTS_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+76,(((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                               < vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+77,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                              ^ vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)),32);
    bufp->fullIData(oldp+78,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                              >> (0x1fU & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))),32);
    bufp->fullIData(oldp+79,(VL_SHIFTRS_III(32,32,5, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, 
                                            (0x1fU 
                                             & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))),32);
    bufp->fullIData(oldp+80,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                              | vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)),32);
    bufp->fullIData(oldp+81,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                              & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)),32);
    bufp->fullIData(oldp+82,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                              + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)),32);
    bufp->fullIData(oldp+83,((VL_LTS_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+84,(((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                               < vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+85,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                              ^ vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)),32);
    bufp->fullIData(oldp+86,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                              | vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)),32);
    bufp->fullIData(oldp+87,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                              & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)),32);
    bufp->fullIData(oldp+88,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                              << (0x1fU & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))),32);
    bufp->fullIData(oldp+89,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                              >> (0x1fU & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))),32);
    bufp->fullIData(oldp+90,(VL_SHIFTRS_III(32,32,5, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, 
                                            (0x1fU 
                                             & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))),32);
    bufp->fullIData(oldp+91,((vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
                              << 0xcU)),32);
    bufp->fullIData(oldp+92,((0xfffffffeU & (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                             + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))),32);
    bufp->fullWData(oldp+93,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut),874);
    bufp->fullQData(oldp+121,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[0]),38);
    bufp->fullQData(oldp+123,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[1]),38);
    bufp->fullQData(oldp+125,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[2]),38);
    bufp->fullQData(oldp+127,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[3]),38);
    bufp->fullQData(oldp+129,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[4]),38);
    bufp->fullQData(oldp+131,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[5]),38);
    bufp->fullQData(oldp+133,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[6]),38);
    bufp->fullQData(oldp+135,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[7]),38);
    bufp->fullQData(oldp+137,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[8]),38);
    bufp->fullQData(oldp+139,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[9]),38);
    bufp->fullQData(oldp+141,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[10]),38);
    bufp->fullQData(oldp+143,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[11]),38);
    bufp->fullQData(oldp+145,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[12]),38);
    bufp->fullQData(oldp+147,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[13]),38);
    bufp->fullQData(oldp+149,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[14]),38);
    bufp->fullQData(oldp+151,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[15]),38);
    bufp->fullQData(oldp+153,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[16]),38);
    bufp->fullQData(oldp+155,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[17]),38);
    bufp->fullQData(oldp+157,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[18]),38);
    bufp->fullQData(oldp+159,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[19]),38);
    bufp->fullQData(oldp+161,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[20]),38);
    bufp->fullQData(oldp+163,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[21]),38);
    bufp->fullQData(oldp+165,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[22]),38);
    bufp->fullCData(oldp+167,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[0]),6);
    bufp->fullCData(oldp+168,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[1]),6);
    bufp->fullCData(oldp+169,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[2]),6);
    bufp->fullCData(oldp+170,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[3]),6);
    bufp->fullCData(oldp+171,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[4]),6);
    bufp->fullCData(oldp+172,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[5]),6);
    bufp->fullCData(oldp+173,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[6]),6);
    bufp->fullCData(oldp+174,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[7]),6);
    bufp->fullCData(oldp+175,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[8]),6);
    bufp->fullCData(oldp+176,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[9]),6);
    bufp->fullCData(oldp+177,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[10]),6);
    bufp->fullCData(oldp+178,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[11]),6);
    bufp->fullCData(oldp+179,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[12]),6);
    bufp->fullCData(oldp+180,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[13]),6);
    bufp->fullCData(oldp+181,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[14]),6);
    bufp->fullCData(oldp+182,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[15]),6);
    bufp->fullCData(oldp+183,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[16]),6);
    bufp->fullCData(oldp+184,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[17]),6);
    bufp->fullCData(oldp+185,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[18]),6);
    bufp->fullCData(oldp+186,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[19]),6);
    bufp->fullCData(oldp+187,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[20]),6);
    bufp->fullCData(oldp+188,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[21]),6);
    bufp->fullCData(oldp+189,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[22]),6);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[0]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[1]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[2]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[3]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[4]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[5]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[6]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[7]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[8]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[9]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[10]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[11]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[12]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[13]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[14]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[15]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[16]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[17]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[18]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[19]),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[20]),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[21]),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[22]),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out),32);
    bufp->fullBit(oldp+214,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit));
    bufp->fullCData(oldp+215,((0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+216,((0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+217,((0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+218,((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst)),7);
    bufp->fullCData(oldp+219,((7U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+220,((vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key),17);
    bufp->fullCData(oldp+222,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out),6);
    bufp->fullBit(oldp+223,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit));
    bufp->fullCData(oldp+224,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out),3);
    bufp->fullBit(oldp+225,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit));
    bufp->fullBit(oldp+226,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out));
    bufp->fullBit(oldp+227,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit));
    bufp->fullIData(oldp+228,((vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                               >> 7U)),25);
    bufp->fullIData(oldp+229,((((- (IData)((vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+230,((((- (IData)((vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+231,((((- (IData)((vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                        >> 7U))))))),32);
    bufp->fullIData(oldp+232,((0xfffff000U & vlSelf->__Vcellinp__ysyx_23060286_top__inst)),32);
    bufp->fullIData(oldp+233,((((- (IData)((vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
                                                | ((0x800U 
                                                    & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                         >> 0x14U))))))),32);
    bufp->fullWData(oldp+234,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut),175);
    bufp->fullQData(oldp+240,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+242,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+244,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+246,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+248,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list[4]),35);
    bufp->fullCData(oldp+250,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list[0]),3);
    bufp->fullCData(oldp+251,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list[1]),3);
    bufp->fullCData(oldp+252,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list[2]),3);
    bufp->fullCData(oldp+253,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list[3]),3);
    bufp->fullCData(oldp+254,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list[4]),3);
    bufp->fullIData(oldp+255,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list[0]),32);
    bufp->fullIData(oldp+256,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list[1]),32);
    bufp->fullIData(oldp+257,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list[2]),32);
    bufp->fullIData(oldp+258,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list[3]),32);
    bufp->fullIData(oldp+259,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list[4]),32);
    bufp->fullIData(oldp+260,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__lut_out),32);
    bufp->fullBit(oldp+261,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__hit));
    bufp->fullIData(oldp+262,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__dnpcjal),32);
    bufp->fullCData(oldp+263,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber2),3);
    bufp->fullWData(oldp+264,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber4),105);
    bufp->fullQData(oldp+268,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+270,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+272,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__pair_list[2]),35);
    bufp->fullCData(oldp+274,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__key_list[0]),3);
    bufp->fullCData(oldp+275,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__key_list[1]),3);
    bufp->fullCData(oldp+276,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__key_list[2]),3);
    bufp->fullIData(oldp+277,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__data_list[0]),32);
    bufp->fullIData(oldp+278,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__data_list[1]),32);
    bufp->fullIData(oldp+279,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__data_list[2]),32);
    bufp->fullIData(oldp+280,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__lut_out),32);
    bufp->fullBit(oldp+281,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__hit));
    bufp->fullIData(oldp+282,(vlSelf->__Vcellout__ysyx_23060286_top__pc_wire),32);
    bufp->fullIData(oldp+283,(((IData)(4U) + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire)),32);
    bufp->fullIData(oldp+284,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[0]),32);
    bufp->fullIData(oldp+285,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[1]),32);
    bufp->fullIData(oldp+286,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[2]),32);
    bufp->fullIData(oldp+287,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[3]),32);
    bufp->fullIData(oldp+288,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[4]),32);
    bufp->fullIData(oldp+289,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[5]),32);
    bufp->fullIData(oldp+290,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[6]),32);
    bufp->fullIData(oldp+291,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[7]),32);
    bufp->fullIData(oldp+292,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[8]),32);
    bufp->fullIData(oldp+293,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[9]),32);
    bufp->fullIData(oldp+294,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[10]),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[11]),32);
    bufp->fullIData(oldp+296,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[12]),32);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[13]),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[14]),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[15]),32);
    bufp->fullIData(oldp+300,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[16]),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[17]),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[18]),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[19]),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[20]),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[21]),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[22]),32);
    bufp->fullIData(oldp+307,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[23]),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[24]),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[25]),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[26]),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[27]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[28]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[29]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[30]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[31]),32);
    bufp->fullIData(oldp+316,(((IData)(4U) + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire)),32);
    bufp->fullIData(oldp+317,((vlSelf->__Vcellout__ysyx_23060286_top__pc_wire 
                               + (vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
                                  << 0xcU))),32);
    bufp->fullIData(oldp+318,(0x17U),32);
    bufp->fullIData(oldp+319,(6U),32);
    bufp->fullIData(oldp+320,(0x20U),32);
    bufp->fullIData(oldp+321,(1U),32);
    bufp->fullIData(oldp+322,(0U),32);
    bufp->fullIData(oldp+323,(0x26U),32);
    bufp->fullIData(oldp+324,(0x17U),32);
    bufp->fullIData(oldp+325,(0x2fU),32);
    bufp->fullIData(oldp+326,(0x11U),32);
    bufp->fullCData(oldp+327,(0x3fU),6);
    bufp->fullWData(oldp+328,(Vysyx_23060286_top__ConstPool__CONST_h6fe14cef_0),1081);
    bufp->fullIData(oldp+362,(0x2fU),32);
    bufp->fullIData(oldp+363,(0xbU),32);
    bufp->fullIData(oldp+364,(7U),32);
    bufp->fullIData(oldp+365,(3U),32);
    bufp->fullCData(oldp+366,(7U),3);
    __Vtemp_h21498232__0[0U] = 0x59e1ff9cU;
    __Vtemp_h21498232__0[1U] = 0xb0709c47U;
    __Vtemp_h21498232__0[2U] = 0xe77aceb1U;
    __Vtemp_h21498232__0[3U] = 0x1b92U;
    bufp->fullWData(oldp+367,(__Vtemp_h21498232__0),110);
    bufp->fullIData(oldp+371,(0xaU),32);
    bufp->fullIData(oldp+372,(0xbU),32);
    bufp->fullIData(oldp+373,(8U),32);
    bufp->fullBit(oldp+374,(0U));
    bufp->fullQData(oldp+375,(0x672707dfcf6f2fe7ULL),64);
    bufp->fullIData(oldp+377,(8U),32);
    bufp->fullIData(oldp+378,(5U),32);
    bufp->fullIData(oldp+379,(0x23U),32);
    bufp->fullIData(oldp+380,(5U),32);
    bufp->fullIData(oldp+381,(0x80000000U),32);
    bufp->fullBit(oldp+382,(1U));
    bufp->fullIData(oldp+383,(3U),32);
}
