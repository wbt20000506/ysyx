#include <systemc.h>

SC_MODULE(PS2Sync) {
    // 端口定义
    sc_in<bool> clk;
    sc_in<bool> ps2_clk;
    sc_signal<bool> sampling;
    sc_signal<sc_bv<3>> ps2_clk_sync;

    // 时钟同步和采样逻辑
    void sync_ps2_clk() {
        ps2_clk_sync = (ps2_clk_sync.read().range(1, 0), ps2_clk.read());
    }

    void generate_sampling_signal() {
		sampling = ps2_clk_sync.read()[2].to_bool() & ~ps2_clk_sync.read()[1].to_bool();

    }

    // 构造函数
    SC_CTOR(PS2Sync) {
        SC_METHOD(sync_ps2_clk);
        sensitive << clk.pos();

        SC_METHOD(generate_sampling_signal);
        sensitive << clk.pos();
    }
};

int sc_main(int argc, char* argv[]) {
    sc_clock clk("clk", 10, SC_NS); // 定义一个10纳秒的时钟
    sc_signal<bool> ps2_clk;

    PS2Sync ps2sync("ps2sync");
    ps2sync.clk(clk);
    ps2sync.ps2_clk(ps2_clk);

    // 波形跟踪文件
    sc_trace_file *wf = sc_create_vcd_trace_file("ps2_waveform");
    sc_trace(wf, clk, "clk");
    sc_trace(wf, ps2_clk, "ps2_clk");
    sc_trace(wf, ps2sync.ps2_clk_sync, "ps2_clk_sync");
    sc_trace(wf, ps2sync.sampling, "sampling");

    // 产生一些测试信号
    sc_start(0, SC_NS);
    for (int i = 0; i < 100; ++i) {
        ps2_clk = (i % 2 == 0) ? 1 : 0;
        sc_start(10, SC_NS);
    }

    sc_close_vcd_trace_file(wf); // 关闭波形文件
    return 0;
}
