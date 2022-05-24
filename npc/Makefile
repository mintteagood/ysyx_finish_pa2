all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@$(clean)
	verilator -Wno-lint --trace -cc $(wildcard ./vsrc/*.v) --exe ./csrc/main.cpp -LDFLAGS -ldl --top ysyx_2204175_top
	make -C obj_dir -j -f Vysyx_2204175_top.mk Vysyx_2204175_top
	./obj_dir/Vysyx_2204175_top $(IMG)
	gtkwave ./obj_dir/Vysyx_2204175.vcd
#.PHONY:clean sim
clean:
	rm -rf .obj_dir
include ../Makefile
