TOPNAME = ysyx_22040175_top
#NXDC_FILES = constr/top.nxdc
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
#SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
#$(SRC_AUTO_BIND): $(NXDC_FILES)
    #python $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@ 

# project source
VSRCS = $(shell find $(npc ./vsrc) -name "*.v")
CSRCS = $(shell find $(npc ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
HSRCS = $(shell find $(npc ./csrc) -name "*.h")
#CSRCS += $(SRC_AUTO_BIND)
DIRS-$(CONFIG_MODE_SYSTEM) += csrc/paddr
# rules for NVBoard
#include $(NVBOARD_HOME)/scripts/nvboard.mk
# Extract compiler and options from menuconfig
CC = $(call remove_quote,$(CONFIG_CC))
CFLAGS_BUILD += $(call remove_quote,$(CONFIG_CC_OPT))
CFLAGS_BUILD += $(if $(CONFIG_CC_LTO),-flto,)
CFLAGS_BUILD += $(if $(CONFIG_CC_DEBUG),-Og -ggdb3,)
CFLAGS_BUILD += $(if $(CONFIG_CC_ASAN),-fsanitize=address,)
CFLAGS_TRACE += -DITRACE_COND=$(if $(CONFIG_ITRACE_COND),$(call remove_quote,$(CONFIG_ITRACE_COND)),true)
CFLAGS  += $(CFLAGS_BUILD) $(CFLAGS_TRACE) -D__GUEST_ISA__=$(GUEST_ISA)
LDFLAGS += $(CFLAGS_BUILD)
# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\"" 
LDFLAGS += -lSDL2 -lSDL2_image

$(BIN): $(VSRCS) $(CSRCS) $(HSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		-top $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(shell find $(npc) $(BIN))
run: $(BIN)
	@$^

clean:
	rm -rf $(BUILD_DIR)

.PHONY: clean run
