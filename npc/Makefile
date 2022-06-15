all:
	@echo "Write this Makefile by your self."
ifdef CONFIG_DIFFTEST
DIFF_REF_PATH = $(NEMU_HOME)/$(call remove_quote,$(CONFIG_DIFFTEST_REF_PATH))
DIFF_REF_SO = $(DIFF_REF_PATH)/build/$(GUEST_ISA)-$(call remove_quote,$(CONFIG_DIFFTEST_REF_NAME))-so
MKFLAGS = GUEST_ISA=$(GUEST_ISA) SHARE=1 ENGINE=interpreter
ARGS_DIFF = --diff=$(DIFF_REF_SO)

ifndef CONFIG_DIFFTEST_REF_NEMU
$(DIFF_REF_SO):
	$(MAKE) -s -C $(DIFF_REF_PATH) $(MKFLAGS)
endif

.PHONY: $(DIFF_REF_SO)
endif
 
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
