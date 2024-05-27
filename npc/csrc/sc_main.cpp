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
bool load_bin_to_map(const std::string &filename, std::map<uint32_t, uint32_t> &data)
{
    std::ifstream binFile(filename, std::ios::binary);
    if (!binFile)
    {
        std::cerr << "Cannot open file: " << filename << std::endl;
        return false;
    }

    uint32_t address = 0x80000000;
    uint32_t value;
    while (binFile.read(reinterpret_cast<char *>(&value), sizeof(value)))
    {
        data[address] = value;
        address += sizeof(value); // 假设每次读取4字节，地址增加4
    }

    binFile.close();
    return true;
}

class Inst_memory : public sc_module
{
public:
    sc_in<bool> clk;
    sc_in<uint32_t> pc;
    sc_out<uint32_t> inst;
    sc_in<bool> rst;

    void update_inst()
    {
        if (rst.read() == false)
        {
            if (data.find(pc.read()) != data.end())
            {
                inst.write(data.at(pc.read()));
            }
        }
    }

    SC_CTOR(Inst_memory)
    {
        SC_METHOD(update_inst);
        sensitive << pc << rst;
        dont_initialize();
    }
};

class Data_memory : public sc_module
{
public:
    sc_in<bool> clk;
    sc_in<uint32_t> a;
    sc_out<uint32_t> rd;
    sc_in<uint32_t> wd;
    sc_in<bool> we;
    void update_data()
    {
        if (we != true)
        {
            if (data_mo.find(a.read()) != data_mo.end())
            {
                rd.write(data_mo.at(a.read()));
                printf("read:0x%08x in 0x%08x\n", rd.read(), a.read());
            }
        }
        else
        {
            if (data_mo.find(a.read()) != data_mo.end())
            {
                data_mo.at(a.read()) = wd.read();
                printf("write:0x%08x in 0x%08x\n", wd.read(), a.read());
            }
        }
    }
    SC_CTOR(Data_memory)
    {
        SC_METHOD(update_data);
        sensitive << a << we;
        dont_initialize();
    }
};

sc_signal<uint32_t> pc_wire;
sc_signal<uint32_t> inst_wire;

extern "C" void npc_trap()
{
    std::cout << "Trap triggered! PC = " << std::hex << pc_wire.read() << std::endl;
    sc_stop(); // 调用 sc_stop 结束仿真
}

extern "C" void npc_error()
{
    std::cout << "BAD TRAP" << std::endl;
    std::cout << "error! PC = "
              << std::hex << std::setw(8) << std::setfill('0') << pc_wire.read() // 使用 setw 和 setfill 格式化输出
              << "  inst = "
              << std::hex << std::setw(8) << std::setfill('0') << inst_wire.read()
              << std::endl;    
    sc_stop(); // 调用 sc_stop 结束仿真
}

int sc_main(int argc, char **argv)
{
    pc_wire.write(0x80000000);
    inst_wire.write(0x00000413);
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    sc_clock clk("clk", 10, SC_NS);
    sc_signal<bool> rst;
    sc_signal<bool> pcsrc;
    sc_signal<bool> memwrite;
    sc_signal<bool> alusrc;
    sc_signal<bool> regwrite;
    sc_signal<bool> zero;
    sc_signal<bool> jalr;
    sc_signal<bool> auipc;
    sc_signal<uint32_t> resultsrc;
    sc_signal<uint32_t> immsrc;
    sc_signal<uint32_t> alucontrol;
    sc_signal<uint32_t> npc_wire;
    sc_signal<uint32_t> snpc_wire;
    sc_signal<uint32_t> rs1data_wire;
    sc_signal<uint32_t> rs2data_wire;
    sc_signal<uint32_t> immext_wire;
    sc_signal<uint32_t> srcb_wire;
    sc_signal<uint32_t> aluresult_wire;
    sc_signal<uint32_t> readdata_wire;
    sc_signal<uint32_t> dnpc_wire;
    sc_signal<uint32_t> result_wire;
    sc_signal<uint32_t> srca_wire;


    Vysyx_23060286_top *top = new Vysyx_23060286_top("top");
    Inst_memory inst_memory("inst_memory");
    Data_memory data_memory("data_memory");
    
    inst_memory.clk(clk);
    inst_memory.rst(rst);
    inst_memory.pc(pc_wire);
    inst_memory.inst(inst_wire);

    data_memory.a(result_wire);
    data_memory.clk(clk);
    data_memory.wd(rs2data_wire);
    data_memory.rd(readdata_wire);
    data_memory.we(memwrite);

    // Connect top
    top->clk(clk);
    top->rst(rst);
    top->npc_wire(npc_wire);
    top->pc_wire(pc_wire);
    top->inst_wire(inst_wire);
    top->snpc_wire(snpc_wire);
    top->rs1data_wire(rs1data_wire);
    top->rs2data_wire(rs2data_wire);
    top->immext_wire(immext_wire);
    top->srcb_wire(srcb_wire);
    top->aluresult_wire(aluresult_wire);
    top->readdata_wire(readdata_wire);
    top->dnpc_wire(dnpc_wire);
    top->result_wire(result_wire);
    top->pcsrc(pcsrc);
    top->memwrite(memwrite);
    top->alusrc(alusrc);
    top->regwrite(regwrite);
    top->zero(zero);
    top->jalr(jalr);
    top->resultsrc(resultsrc);
    top->immsrc(immsrc);
    top->alucontrol(alucontrol);
    top->srca_wire(srca_wire);
    top->auipc(auipc);

    // Initialize data
    if (!load_bin_to_map(argv[1], data))
    {
        std::cerr << "Failed to load binary file into the map!" << std::endl;
        return -1;
    }
    // Trace
    sc_trace_file *wf = sc_create_vcd_trace_file("wave");
    sc_trace(wf, clk, "clk");
    sc_trace(wf, pc_wire, "pc");
    sc_trace(wf, inst_wire, "inst");
    sc_trace(wf, rs1data_wire, "rs1data");
    sc_trace(wf, rs2data_wire, "rs2data");
    sc_trace(wf, immext_wire, "immext");
    sc_trace(wf, result_wire, "result");
    sc_trace(wf, dnpc_wire, "dnpc");
    sc_trace(wf, jalr, "jalr");
    

    std::cout << "Simulation start!" << std::endl;
    rst.write(true);
    sc_start(0, SC_NS);
    rst.write(false);
    sc_start();

    top->final();
    sc_close_vcd_trace_file(wf);
    delete top;
    std::cout << "Simulation done!" << std::endl;

    return 0;
}
