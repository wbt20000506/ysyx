VSRC = $(wildcard ./vsrc/*.v)
CSRC = $(wildcard ./csrc/*.cpp)
MODE = sdb

all:$(CSRC) $(VSRC)
	verilator --sc --trace --exe -Wall --public-flat-rw --top-module ysyx_23060286_top $(CSRC) $(VSRC) -CFLAGS "-I/usr/include/readline -I/usr/lib/llvm-11/include -fPIE" -LDFLAGS "-L/usr/lib/readline -lreadline -lLLVM-11 -lelf "
	make -j -C obj_dir -f Vysyx_23060286_top.mk Vysyx_23060286_top
	obj_dir/Vysyx_23060286_top $(IMG) $(MODE) 
	#gtkwave wave.vcd
	
sim:$(CSRC) $(VSRC)
	$(call git_commit, "sim RTL")
	verilator --sc --trace --exe -Wall --top-module top $(CSRC) $(VSRC)
	make -j -C obj_dir -f Vtop.mk Vtop
	obj_dir/Vtop
	gtkwave wave.vcd
	
PROJ_PATH = $(shell pwd)
DESIGN ?= gcd
SDC_FILE ?= $(PROJ_PATH)/vsrc/gcd.sdc
RTL_FILES ?= $(shell find $(PROJ_PATH)/vsrc -name "*.v")
export CLK_FREQ_MHZ ?= 500
RESULT_DIR = $(PROJ_PATH)/result/$(DESIGN)-$(CLK_FREQ_MHZ)MHz
NETLIST_V  = $(RESULT_DIR)/$(DESIGN).netlist.v
TIMING_RPT = $(RESULT_DIR)/$(DESIGN).rpt
sta: $(TIMING_RPT)
$(TIMING_RPT): $(SDC_FILE) $(NETLIST_V)
	LD_LIBRARY_PATH=bin/ ./bin/iSTA $(PROJ_PATH)/sta.tcl $(DESIGN) $(SDC_FILE) $(NETLIST_V)
	
TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp" | grep -v "sc_main.cpp")

CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))
run: $(BIN)
	@$^


.PHONY: clean
clean:
	rm -rf obj_dir wave.vcd build

