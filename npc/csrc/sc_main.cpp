#include <systemc.h>
#include <verilated.h>
#include <verilated_vcd_sc.h>
#include "Vysyx_23060286_top.h"
#include <iostream>
#include <vector>
#include <iomanip>
#include <map>
#include <stdio.h>
std::map<uint32_t, uint32_t> data;
std::map<uint32_t, uint32_t> data_mo;
bool load_bin_to_map(const std::string& filename, std::map<uint32_t, uint32_t>& data) {
    std::ifstream binFile(filename, std::ios::binary);
    if (!binFile) {
        std::cerr << "Cannot open file: " << filename << std::endl;
        return false;
    }

    uint32_t address = 0x80000000;
    uint32_t value;
    while (binFile.read(reinterpret_cast<char*>(&value), sizeof(value))) {
        data[address] = value;
        address += sizeof(value);  // 假设每次读取4字节，地址增加4
    }

    binFile.close();
    return true;
}

class Inst_memory : public sc_module {
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

    SC_CTOR(Inst_memory) {
        SC_METHOD(update_inst);
        sensitive << pc << rst;
        dont_initialize();
    }
};

class Data_memory : public sc_module {
public:
    sc_in<bool> clk;
    sc_in<uint32_t> a;
    sc_out<uint32_t> rd;
    sc_in<uint32_t> wd;
    sc_in<bool> we; 
    void update_data() {
        if(we!=true){
            if (data_mo.find(a.read()) != data_mo.end()) {
                rd.write(data_mo.at(a.read()));
                printf("read:0x%08x in 0x%08x\n",rd.read(),a.read());
            }
        }else{
            if (data_mo.find(a.read()) != data_mo.end()) {
                data_mo.at(a.read())=wd.read();
                printf("write:0x%08x in 0x%08x\n",wd.read(),a.read());
            }
        }
    }
    SC_CTOR(Data_memory) {
        SC_METHOD(update_data);
        sensitive << a << we;
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
    sc_signal<uint32_t> npc;
    sc_signal<bool> branch;
    sc_signal<bool> jump;
    sc_signal<bool> zero;

    Vysyx_23060286_top* top = new Vysyx_23060286_top("top");
    Inst_memory inst_memory("inst_memory");

    inst_memory.clk(clk);
    inst_memory.rst(rst);
    inst_memory.pc(pc);
    inst_memory.inst(inst);

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
    top->branch_wire(branch);
    top->jump_wire(jump);
    top->zero_wire(zero);
    top->npc_wire(npc);
    
    // Initialize data
    if (!load_bin_to_map(argv[1], data)) {
        std::cerr << "Failed to load binary file into the map!" << std::endl;
        return -1;
    }
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
    sc_trace(wf, immtype, "immtype");
    sc_trace(wf, alucotrol, "alucotrol");
    sc_trace(wf, wen, "wen");
    sc_trace(wf, branch, "branch");
    sc_trace(wf, jump, "jump");
    sc_trace(wf, zero, "zero");
    sc_trace(wf, npc, "npc");
    


    std::cout << "Simulation start!" << std::endl;
    rst.write(true);
    sc_start(0, SC_NS);
    rst.write(false);
    sc_start(120, SC_NS);

    top->final();
    sc_close_vcd_trace_file(wf);
    delete top;
    std::cout << "Simulation done!" << std::endl;
    return 0;
}
