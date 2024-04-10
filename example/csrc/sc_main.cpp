#include <systemc.h>
#include <verilated.h>
#include <verilated_vcd_sc.h>
#include "Vtop.h"
#include <iostream>

int sc_main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    sc_signal<bool> a;
	sc_signal<bool> b;
	sc_signal<bool> f;
	Vtop* top = new Vtop("top");  // 实例化模块
    top->a(a);
    top->b(b);
    top->f(f);
    // start simulation and trace
    std::cout << "VBuffer start!" << std::endl;
    sc_start(0, SC_NS);
    VerilatedVcdSc* trace = new VerilatedVcdSc();
    top->trace(trace, 99);
    trace->open("wave.vcd");
    // reset
    a=0;b=0;
    sc_start(1, SC_NS);
    cout<<sc_time_stamp()<<":"<<f.read()<<endl;
    a=0;b=1;
    sc_start(1, SC_NS);
    cout<<sc_time_stamp()<<":"<<f.read()<<endl;
    a=1;b=0;
    sc_start(1, SC_NS);
    cout<<sc_time_stamp()<<":"<<f.read()<<endl;
    a=1;b=1;
    sc_start(1, SC_NS);
    cout<<sc_time_stamp()<<":"<<f.read()<<endl;
    sc_start(1, SC_NS);
    top->final();
    trace->flush();
    trace->close();
    delete trace;
    delete top;
    std::cout << "VBuffer done!" << std::endl;
    return 0;
}
