#include <systemc.h>
#include <verilated.h>
#include <verilated_vcd_sc.h>
#include "Vtop.h"
#include <iostream>
#include <vector>
#include <iomanip>
#include <map>

std::map<uint32_t, uint32_t> data;

class Simulator : public sc_module {
public:
    sc_in<bool> clk;
    sc_in<uint32_t> pc;
    sc_out<uint32_t> inst;
    sc_in<bool> rst;
    

    void update_inst() {
        if (rst.read() == false) {
            if (data.find(pc.read()) != data.end()) {
                inst.write(data.at(pc.read()));
            }
        }
    }

    SC_CTOR(Simulator) {
        SC_METHOD(update_inst);
        sensitive << pc << rst;
        dont_initialize();
    }
};
sc_signal<uint32_t> pc; // 确保这是正确定义的外部变量

extern "C" void npc_trap() {
    std::cout << "Trap triggered! PC = " << std::hex << pc.read() << std::endl;
    sc_stop();  // 调用 sc_stop 结束仿真
}

int sc_main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    sc_clock clk("clk", 10, SC_NS);
    sc_signal<bool> rst;
    sc_signal<uint32_t> inst;
    sc_signal<uint32_t> rddata;
    sc_signal<uint32_t> rs1data;
    sc_signal<uint32_t> rs2data;
    sc_signal<uint32_t> immtype;
    sc_signal<uint32_t> alucotrol;
    sc_signal<bool> wen;
    sc_signal<uint32_t> immext;
    sc_signal<bool> of;
    sc_signal<bool> zf;
    sc_signal<bool> nf;
    sc_signal<bool> cf;

    Vtop* top = new Vtop("top");
    Simulator sim("Simulator");

    sim.clk(clk);
    sim.rst(rst);
    sim.pc(pc);
    sim.inst(inst);

    // Connect top
    top->rst(rst);
    top->clk(clk);
    top->pc_wire(pc);
    top->inst(inst);
    top->rddata_wire(rddata);
    top->rs1data_wire(rs1data);
    top->rs2data_wire(rs2data);
    top->immtype_wire(immtype);
    top->alucotrol_wire(alucotrol);
    top->wen_wire(wen);
    top->immext_wire(immext);
    top->of_wire(of);
    top->nf_wire(nf);
    top->zf_wire(zf);
    top->cf_wire(cf);

    // Initialize data
    data[0x80000000] = 0x00108093;
    data[0x80000004] = 0x00108093;
    data[0x80000008] = 0x00108093;
    data[0x8000000c] = 0x00100073;
    // Trace
    sc_trace_file *wf = sc_create_vcd_trace_file("wave");
    sc_trace(wf, clk, "clk");
    sc_trace(wf, rst, "rst");
    sc_trace(wf, pc, "pc");
    sc_trace(wf, inst, "inst");
    sc_trace(wf, rddata, "rddata");
    sc_trace(wf, rs1data, "rs1data");
    sc_trace(wf, rs2data, "rs2data");
    sc_trace(wf, immext, "immext");




    std::cout << "Simulation start!" << std::endl;
    rst.write(true);
    sc_start(0, SC_NS);
    rst.write(false);
    sc_start(100, SC_NS);

    top->final();
    sc_close_vcd_trace_file(wf);
    delete top;
    std::cout << "Simulation done!" << std::endl;
    return 0;
}
