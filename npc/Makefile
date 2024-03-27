# Verilator Makefile 示例

# Verilator 设置
VERILATOR = verilator
VERILATOR_FLAGS = -Wall --cc --trace

# 源文件路径
VERILOG_SRC_DIR = vsrc
CPP_SRC_DIR = csrc

# Verilog 源文件
VERILOG_SRC = $(wildcard $(VERILOG_SRC_DIR)/*.v)

# Verilator 生成的 C++ 对象目录
OBJ_DIR = obj_dir

# 设置最终的可执行文件名称
EXECUTABLE = sim

# Verilog 模块的顶层
TOP_MODULE = top

# 默认目标
all: $(EXECUTABLE)

# 编译 Verilog 文件
$(OBJ_DIR)/V$(TOP_MODULE)__ALL.a: $(VERILOG_SRC)
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILOG_SRC) --exe $(wildcard $(CPP_SRC_DIR)/*.cpp)
	make -C $(OBJ_DIR) -f V$(TOP_MODULE).mk

# 链接生成可执行文件
$(EXECUTABLE): $(OBJ_DIR)/V$(TOP_MODULE)__ALL.a
	g++ -o $(EXECUTABLE) $(OBJ_DIR)/V$(TOP_MODULE)__ALL.a $(VERILATOR_FLAGS)

# 清理目标
clean:
	rm -rf $(OBJ_DIR) $(EXECUTABLE)

# 额外的依赖关系
.PHONY: all clean



sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

include ../Makefile
