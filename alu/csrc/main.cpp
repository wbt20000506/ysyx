#include <verilated.h>
#include "Vtop.h" // 自动生成的Verilator模块头文件
#include "nvboard.h"

extern void nvboard_bind_all_pins(Vtop* top); // 如果在其他文件中定义了这个函数

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtop* top = new Vtop; // 实例化您的Verilog模块
    nvboard_bind_all_pins(top); // 绑定引脚
    nvboard_init(); // 初始化NVBoard

    while (!Verilated::gotFinish()) {
        // 这里处理输入和运行Verilog模块
        top->eval(); // 评估模块
        nvboard_update(); // 更新NVBoard状态
    }

    top->final(); // 清理模块
    delete top;
    nvboard_quit(); // 退出NVBoard

    return 0;
}

