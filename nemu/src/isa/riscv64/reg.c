#include <isa.h>
#include "local-include/reg.h"

const char* regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  for(int i=0;i<32;i++){
  printf("%s %08lx\n", regs[i], cpu.gpr[i]);
  }
}



word_t isa_reg_str2val(const char *s, bool *success) {
   /*char *pin =strtok(s, "$");*/
 	int i = 0;
 	int eq[32]={0};
 	int position = 0;
   for(i=0;i<32;i++){
       if(s[position] != '\0'){
	if(s[position]==regs[i][position]){
	    eq[i] = 1;
	    position=position+1;
	    printf("ok and eq[i]=%d",eq[i]);
	    }
	else
	    eq[i] = 0;
	
	}
      else {
         if(eq[i]==1)
          printf("\nregsi=%s and i=%d and s=%d and cpu=%08lx\n",regs[i],i,*s,cpu.gpr[i]);
      }
	}
	
	
/*	int i=0;
	 for(i=0;i<32;i++){
	if(*s==*regs[i])
          printf("\nregsi=%s and i=%d and s=%d and cpu=%08lx\n",regs[i],i,*s,cpu.gpr[i]);
          }
       */

return 0;
}
