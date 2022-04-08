#include "sdb.h"

#define NR_WP 32

/*typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  unsigned int value;
  char* expr;
  bool isused;
   TODO: Add more members if necessary 

} WP;*/
bool su =true;
/*static WP wp_pool[NR_WP] = {};*/
static WP *head = NULL, *free_ = NULL;
void init_wp_pool(){
  head->NO = 0;
  head->next = NULL;
  head->value = 0;
  head->expr = NULL;
  head->isused = false;
  
  free_ ->NO = 1;
  free_ ->next = NULL;
  free_ ->value = 0;
  free_ ->expr = NULL;
  free_ ->isused = false;
  }

WP *new_wp(char *str , int value){
   if(su == true){
       init_wp_pool();
       su = false;
   }
   if(free_ == NULL){
       printf("Erro!free is null.\n");
       assert(0);
   }
   WP *new = NULL;
   new = free_;
   free_ = free_->next;
   new->value = value;
   strcpy(new->expr, str);
   new->next = NULL;
   new->isused = true;
   printf("add a watchpoint %s 0x%08x\n",new->expr,new->value);
   if(head == NULL) head = new;
   else{
       new->next = head;
       head = new ;
   }
   return new;
} 
