all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@$(clean)
	verilar -Wno -lint --trace -cc $(wildcard ./vsrc/*.v) --exe ./csrc/main.cpp -LDFLAGS -ldl --top ysyx_2204175_TOP
	make -C obj_dir -f Vysyx_2204175.mk Vysyx_2204175
	./obj_dir/Vysyx_2204175 $(IMG)
	gtkwave ./obj_dir/Vysyx_2204175.vcd
#.PHONY:clean sim
clean:
	rm -rf .obj_dir
include ../Makefile
