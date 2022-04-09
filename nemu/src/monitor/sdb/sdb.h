#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

word_t expr(char *e, bool *success);
void print_wp();
typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char exp[32];
  int value;
 
} WP;
WP* new_wp(char * exp);

#endif
