#include "Vtop.h"      // 包含由 Verilator 生成的头文件
#include "verilated.h" // Verilator 的基础库
#include "verilated_vcd_c.h" // 波形输出的库

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv); // 处理 Verilator 的参数
    Vtop* top = new Vtop; // 创建一个 Verilog 模块实例

    Verilated::traceEverOn(true);
    VerilatedVcdC* vcd = new VerilatedVcdC;
    top->trace(vcd, 5); // 设置追踪深度
    vcd->open("waveform.vcd"); // 创建 VCD 文件

    for (int i = 0; i < 10; i++) {
        top->a = i & 1; // 改变输入
        top->b = (i >> 1) & 1;
        top->eval(); // 评估 Verilog 模块

        vcd->dump(i); // 记录波形
    }

    vcd->close(); // 关闭 VCD 文件
    delete top; // 清理实例
    delete vcd; // 清理波形文件对象
    exit(0);
}

