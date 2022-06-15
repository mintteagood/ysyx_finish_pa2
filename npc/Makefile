#加入spike

include $(NEMU_HOME)/tools/difftest.mk
NAME = $(GUEST_ISA)-spike-so
BINARY = $(BUILD_DIR)/$(NAME)
SRCS = csrc/main.cc

$(BINARY): $(SPIKE) $(SRCS)
	g++ -O2 -shared -fPIC $(INC_PATH) $(SRCS) $(INC_LIBS) -o $@
	
all:
	@echo "Write this Makefile by your self."
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@$(clean)
	verilator -Wno-lint --trace -cc $(wildcard ./vsrc/*.v) --exe $(wildcard ./csrc/*.cpp) -LDFLAGS -ldl --top ysyx_22040175_top
	make -C obj_dir -j -f Vysyx_22040175_top.mk Vysyx_22040175_top
	./obj_dir/Vysyx_22040175_top $(IMG)
	#gtkwave ./obj_dir/Vysyx_22040175.vcd
#PHONY:clean sim

clean:
	rm -rf .obj_dir
include ../Makefile
#include ./vsrc/Makefile
