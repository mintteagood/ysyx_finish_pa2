#ifndef __MEMORY_PADDR_H__
#define __MEMORY_PADDR_H__

#define CONFIG_ISA_riscv64 1
#define CONFIG_DIFFTEST_REF_NAME "none"
#define CONFIG_ENGINE "interpreter"
#define CONFIG_PC_RESET_OFFSET 0x0
#define CONFIG_TARGET_NATIVE_ELF 1
#define CONFIG_MSIZE 0x8000000
#define CONFIG_CC_O2 1
#define CONFIG_MODE_SYSTEM 1
#define CONFIG_MEM_RANDOM 1
#define CONFIG_ITRACE 1
#define CONFIG_TRACE_END 10000
#define CONFIG_MBASE 0x80000000
#define CONFIG_TIMER_GETTIMEOFDAY 1
#define CONFIG_ENGINE_INTERPRETER 1
#define CONFIG_CC_OPT "-O2"
#define CONFIG_RT_CHECK 1
#define CONFIG_ISA64 1
#define CONFIG_ITRACE_COND "true"
#define CONFIG_CC "gcc"
#define CONFIG_DIFFTEST_REF_PATH "none"
#define CONFIG_CC_DEBUG 1
#define CONFIG_TRACE_START 0
#define CONFIG_CC_GCC 1
#define CONFIG_TRACE 1
#define CONFIG_ISA "riscv64"
#define CONFIG_PMEM_GARRAY 1

#if CONFIG_MBASE + CONFIG_MSIZE > 0x100000000ul
#define PMEM64 1
#endif

typedef MUXDEF(CONFIG_ISA64, uint64_t, uint32_t) word_t;
typedef MUXDEF(CONFIG_ISA64, int64_t, int32_t)  sword_t;
#define FMT_WORD MUXDEF(CONFIG_ISA64, "0x%016lx", "0x%08x")

typedef word_t vaddr_t;
typedef MUXDEF(PMEM64, uint64_t, uint32_t) paddr_t;
#define FMT_PADDR MUXDEF(PMEM64, "0x%016lx", "0x%08x")
typedef uint16_t ioaddr_t;




#define RESET_VECTOR (CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)

/* convert the guest physical address in the guest program to host virtual address in NEMU */
uint8_t* guest_to_host(paddr_t paddr);
/* convert the host virtual address in NEMU to guest physical address in the guest program */
paddr_t host_to_guest(uint8_t *haddr);

static inline bool in_pmem(paddr_t addr) {
  return (addr >= CONFIG_MBASE) && (addr < (paddr_t)CONFIG_MBASE + CONFIG_MSIZE);
}

word_t paddr_read(paddr_t addr, int len);
void paddr_write(paddr_t addr, int len, word_t data);

#endif