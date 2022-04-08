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
 /* for (int i=0;i<33;i++){
  wp_pool[i].NO = 0;
  wp_pool[i].next = NULL;
  wp_pool[i].value = 0;
  wp_pool[i].expr = NULL;
  wp_pool[i].isused = false;
  }*/
}
WP *new_wp(char *str , int value){
   if(su == true){
       init_wp_pool();
       su = false;
   }
   if(free_ != NULL){
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
