all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@$(clean)
	verilator -Wno-lint --trace -cc $(wildcard ./vsrc/*.v) --exe ./csrc/main.cpp -LDFLAGS -ldl --top top
	make -C obj_dir -j -f Vtop.mk Vtop
	./obj_dir/Vtop $(IMG)
	gtkwave ./obj_dir/Vysyx_2204175.vcd
#.PHONY:clean sim
clean:
	rm -rf .obj_dir
include ../Makefile
