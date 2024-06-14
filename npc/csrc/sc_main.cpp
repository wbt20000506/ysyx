#include <systemc.h>
#include <verilated.h>
#include <verilated_vcd_sc.h>
#include "Vysyx_23060286_top.h"
#include "Vysyx_23060286_top___024root.h"
#include <iostream>
#include <vector>
#include <iomanip>
#include <map>
#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
std::map<uint32_t, uint32_t> data;
std::map<uint32_t, uint8_t> data_mo;
sc_signal<uint32_t> pc_wire;
sc_signal<uint32_t> inst_wire;
sc_signal<uint32_t> npc_wire;
char **global_argv;
Vysyx_23060286_top *top = new Vysyx_23060286_top("top");
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
void init_difftest(long img_size, int port);
extern "C" {
    char *rl_gets();
}
void diffstpe();
void set_wp(char *arg, uint32_t value);
void display_wp();
void delete_wp(int n);
void init_regex();
void sdb();
void init_wp_pool();
void scan_wp();
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void init_disasm(const char *triple);
char *load_elf_symbols(const char *elf_path, const uint32_t addr);
void ftace(char j,uint32_t f_pc,uint32_t f_inst,uint32_t f_dnpc);
uint32_t expr(char *e, bool *success);
bool isa_difftest_checkregs();
char *rl_gets() {
    static char *line_read = NULL;
    // 如果我们已经有了之前读取的数据，释放它
    if (line_read) {
        free(line_read);
        line_read = NULL;
    }
    // 使用 Readline 库读取一行
    line_read = readline("> ");
    // 如果读取的行有内容，添加到历史中
    if (line_read && *line_read) {
        add_history(line_read);
    }
    return line_read;
}

void sdb(){
    init_regex();
    init_wp_pool();
    init_disasm("riscv32-pc-linux-gnu");
    init_difftest(4, 1);
    while(1){
        char *a=rl_gets();
        char *arg = strtok(a, " ");
        if(!strcmp("c",a)){
            sc_start();
        }

        if(!strcmp("q",a)){
            sc_stop();
            return;
        }

        if(!strcmp("si",a)){
            sc_start(10,SC_NS);
        }

        if (!strcmp("info",a))
        {
            char *arg = strtok(NULL, " ");
            if(!strcmp("m",arg)){
                for (std::map<uint32_t, uint8_t>::const_iterator it = data_mo.begin(); it != data_mo.end(); ++it)
                        {printf("address: 0x%08x value: 0x%08x\n",it->first,it->second);}
            }
            if(!strcmp("r",arg)){
                int count=0;
                for (int i=0;i<32;i++){
                    printf("%s:0x%08x\t",regs[i],top->rootp->ysyx_23060286_top__DOT__GRP__DOT__rf[i]);
                        count++;
                    if (count==3 || i==31)
                    {
                        printf("\n");
                        count=0;
                    } 
                }
            }
            if(!strcmp("w",arg)){
                display_wp();
            }
        }

        if(!strcmp("p",a)){
            char *arg = strtok(NULL, " ");

            bool success;
            uint32_t data=expr(arg,&success);
            if (!strcmp("$pc",arg)){
                printf("%s=0x%08x\n",arg,pc_wire.read());
            }else{
                printf("%s=%u\n",arg,data);
                printf("%s=0x%08x\n",arg,data);
            }
        }

        if(!strcmp("w",a)){
            char *arg = strtok(NULL, " ");
            if(arg == NULL)
            {
                printf("Unknown input, the standard format is 'w EXPR'\n");
            }
            bool success;
            uint32_t res = expr(arg, &success);
            if(!success)
                printf("The expression is problematic\n");
            else 
                set_wp(arg, res);
            
        }

        if(!strcmp("d",a)){
              if(arg == NULL)
            {
                printf("Unknown input, the standard format is 'd N'\n");
            }
            char *arg = strtok(NULL, " ");
            int n = strtol(arg, NULL, 10);
            delete_wp(n);
        }

        

    }
}



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

class Inst_memory : public sc_module {
public:
    sc_in<bool> clk;
    sc_in<uint32_t> pc;
    sc_out<uint32_t> inst;
    sc_in<bool> rst;
    sc_event inst_updated;  // 事件，用于指示指令更新完成

    void update_inst() {
        if (!rst.read()) {
            if (data.find(pc.read()) != data.end()) {
                inst.write(data.at(pc.read()));
                inst_updated.notify(SC_ZERO_TIME);  // 在更新指令后立即通知事件
            }
        }
    }

    void itrace() {
        scan_wp();
        if(!isa_difftest_checkregs()){
            sc_stop();
        }
        char *p = new char[104];
        memset(p,' ',1);
        uint8_t code[4];
        code[3] = (inst.read()>>24)&0xff;
        code[2] = (inst.read()>>16)&0xff;
        code[1] = (inst.read()>>8)&0xff;
        code[0] = inst.read()&0xff;
        disassemble(p,104,pc.read(),code,4);
        printf("0x%08x: 0x%08x  %s\n", pc.read(), inst.read(), p);
        ftace(*p,pc.read(),inst.read(),npc_wire.read());
        diffstpe();

    }

    SC_CTOR(Inst_memory) {
        SC_METHOD(update_inst);
        sensitive << pc << rst;
        dont_initialize();

        SC_METHOD(itrace);
        sensitive << inst_updated;  // 对 inst_updated 事件敏感
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
    sc_in<uint32_t> we;
    
    void update_data()
    {
        if ((we.read()&0x00000001) != true)
        {
            uint32_t temp=0;
            if (a.read() < 0x8fffffff)
            {            
                if(we.read()==0){
                    temp = (uint32_t)data_mo[a.read()] + (((uint32_t)data_mo[a.read()+1])<<8) + (((uint32_t)data_mo[a.read()+2])<<16) + (((uint32_t)data_mo[a.read()+3])<<24);
                }
                if(we.read()==2){
                    temp=(uint32_t)data_mo[a.read()];
                }
                if(we.read()==4){
                    temp=((int16_t)((uint32_t)data_mo[a.read()]+((uint32_t)data_mo[a.read()+1]<<8)));
                }
                if(we.read()==6){
                    temp=(uint32_t)data_mo[a.read()]+((uint32_t)data_mo[a.read()+1]<<8);
                }
            }
            rd.write(temp);
            if((inst_wire<<26)==0x0c000000)
            printf("read:0x%08x in 0x%08x\n", temp, a.read());
        }
        else
        {   
            if(we.read()==1){
                data_mo[a.read()] = wd.read()&0xff;
                data_mo[a.read()+1] = wd.read()>>8&0xff;
                data_mo[a.read()+2] = wd.read()>>16&0xff;
                data_mo[a.read()+3] = wd.read()>>24&0xff;
            }
            if(we.read()==5){
                data_mo[a.read()] = wd.read()&0xff;
                data_mo[a.read()+1] = wd.read()>>8&0xff;
            }
            if(we.read()==7){
                data_mo[a.read()] = wd.read()&0xff;
            }

            printf("write:0x%08x in 0x%08x\n", wd.read(), a.read());
        }
    }
    SC_CTOR(Data_memory)
    {
        SC_METHOD(update_data);
        sensitive << clk.neg();
        dont_initialize();
    }
};



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
    global_argv = argv;
    pc_wire.write(0x80000000);
    inst_wire.write(0x00000413);
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    sc_clock clk("clk", 10, SC_NS);
    sc_signal<bool> rst;
    sc_signal<bool> pcsrc;
    sc_signal<bool> alusrc;
    sc_signal<bool> regwrite;
    sc_signal<bool> zero;
    sc_signal<bool> jalr;
    sc_signal<bool> auipc;
    sc_signal<uint32_t> memwrite;
    sc_signal<uint32_t> resultsrc;
    sc_signal<uint32_t> immsrc;
    sc_signal<uint32_t> alucontrol;
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


    Inst_memory inst_memory("inst_memory");
    Data_memory data_memory("data_memory");
    
    inst_memory.clk(clk);
    inst_memory.rst(rst);
    inst_memory.pc(pc_wire);
    inst_memory.inst(inst_wire);

    data_memory.a(aluresult_wire);
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
    bool load=load_bin_to_map(argv[1], data);
    if (!load)
    {
        printf("no image,using delault image\n");
        data[0x80000000]=0x00000297;
        data[0x80000004]=0x00028823;
        data[0x80000008]=0xfff74713;
        data[0x8000000c]=0x00100073;
    }
    //init_data_mo(data_mo);

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
    sc_trace(wf, memwrite, "memwrite");
    sc_trace(wf, aluresult_wire, "aluresult");


    std::cout << "Simulation start!" << std::endl;
    rst.write(true);
    sc_start(0, SC_NS);
    rst.write(false);
    sc_start(0, SC_NS);

    if (!load){

        if(!strcmp("b",argv[1])){
            init_regex();
            init_wp_pool();
            init_disasm("riscv32-pc-linux-gnu");
            init_difftest(4, 1);
            sc_start();
        }

        if(!strcmp("sdb",argv[1])){
            sdb();
        }
    }else
    {
        if(!strcmp("b",argv[2])){
            init_regex();
            init_wp_pool();
            init_disasm("riscv32-pc-linux-gnu");
            init_difftest(4, 1);
            sc_start();
        }

        if(!strcmp("sdb",argv[2])){
            sdb();
        }
    }
    
    top->final();
    //sc_close_vcd_trace_file(wf);
    delete top;
    std::cout << "Simulation done!" << std::endl;

    return 0;
}
