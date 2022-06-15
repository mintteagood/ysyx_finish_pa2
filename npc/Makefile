all:
	@echo "Write this Makefile by your self."


WORK_DIR  = $(shell pwd)
DST_DIR   = $(WORK_DIR)/onj_dir
$(shell mkdir -p $(DST_DIR))
CC        = $(CROSS_COMPILE)gcc
CXX       = $(CROSS_COMPILE)g++
LD        = $(CROSS_COMPILE)ld
OBJS      = $(addprefix $(DST_DIR)/, $(addsuffix .o, $(basename $(SRCS))))
LIBS     := $(sort $(LIBS) am klib) # lazy evaluation ("=") causes infinite recursions
LINKAGE   = $(OBJS) \
  $(addsuffix -$(ARCH).a, $(join \
    $(addsuffix /build/, $(addprefix $(AM_HOME)/, $(LIBS))), \
    $(LIBS) ))
$(IMAGE).elf: $(OBJS) am $(LIBS)
	@echo + LD "->" $(IMAGE_REL).elf
	@$(LD) $(LDFLAGS)  -o $(IMAGE).elf --start-group $(LINKAGE) --end-group 
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
