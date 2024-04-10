VSRC = $(wildcard ./vsrc/top.v)
CSRC = $(wildcard ./csrc/sc_main.cpp)

all:$(CSRC) $(VSRC)
	verilator --sc --trace --exe -Wall $(CSRC) $(VSRC)
	make -j -C obj_dir -f Vtop.mk Vtop
	obj_dir/Vtop

sim:$(CSRC) $(VSRC)
	$(call git_commit, "sim RTL")
	verilator --sc --trace --exe -Wall $(CSRC) $(VSRC)
	make -j -C obj_dir -f Vtop.mk Vtop
	obj_dir/Vtop
	gtkwave wave.vcd
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

