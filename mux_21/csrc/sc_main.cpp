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
    sc_signal<bool> a,b,s,f;
    top->a(a);
    top->b(b);
    top->s(s);
    top->f(f);
    sc_start(0,SC_NS);
    VerilatedVcdSc *trace=new VerilatedVcdSc();

    top->trace(trace,99);   
    trace->open("wave.vcd");
    
    s=0;
    for(int j=0;j<2;j++){
    for(int i=0;i<4;i++){
    a=i%2;
    b=(i+1)%2;
    while(s==1){
        f=b;
        break;
    }
    while(s==0){
        f=a;
        break;
    }
    sc_start(1,SC_NS);
    cout<<"s:"<<s.read()<<"  a:"<<a.read()<<"  b:"<<b.read()<<"  f:"<<f.read()<<endl;
    }
    s=1;
    }
    sc_start(1,SC_NS);
    top->final();
    trace->flush();
    trace->close();
    delete trace;
    delete top;
    return 0;
}
