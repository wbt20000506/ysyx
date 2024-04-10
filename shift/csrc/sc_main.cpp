#include <systemc>
#include <verilated.h>
#include <verilated_vcd_sc.h>
#include <iostream>
#include "Vtop.h"

int sc_main(int argc,char** argv)
{
    Verilated::commandArgs(argc,argv);
    Verilated::traceEverOn(true);

    Vtop *top=new Vtop("top");
    sc_signal<uint32_t> x;
    sc_signal<uint32_t> y;
    sc_signal<bool> en;
    top->x(x);
    top->en(en);
    top->y(y);
    
    
    sc_start(0,SC_NS);
    VerilatedVcdSc *trace=new VerilatedVcdSc();

    top->trace(trace,99);   
    trace->open("wave.vcd");
    en=1;
    for(int i=0;i<4;i++){
        x=i;
        sc_start(1,SC_NS);
        cout<<"x:"<<top->x<<"  y:"<<top->y<<endl;
    }
    sc_start(1,SC_NS);
    top->final();
    trace->flush();
    trace->close();
    delete trace;
    delete top;
    return 0;
}
