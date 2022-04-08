#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

word_t expr(char *e, bool *success);

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  unsigned int value;
  char* expr;
  bool isused;
  /* TODO: Add more members if necessary */

} WP;
WP *new_wp(char *str , int value);

#endif
