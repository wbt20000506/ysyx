#include <systemc.h>
uint32_t expr(char *e, bool *success);



#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

  uint32_t old_value;
  char expr[32];         // ** char *expr is error ** //
} WP;


static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;
static WP *end = NULL, *free_end = NULL;
void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = end = NULL;
  free_ = wp_pool;
  free_end = &wp_pool[NR_WP - 1];
}

WP* new_wp()
{
  if(head==NULL){
    head=end=free_;
    free_=free_->next;
    head->next=NULL;
  }else{
    end->next=free_;
    free_=free_->next;
    end=end->next;
    end->next=NULL;
  }
  return end;
}

void free_wp(WP *wp)
{
  if (wp==head){
    head=head->next;
    wp->next=free_;
    free_=wp;
  }
  else if(wp==end){
    WP *tmp=head;
    while(tmp){
      
      if(tmp->next==end){
        tmp->next=NULL;
        break;
      }else
      tmp=tmp->next;
    }
    end->next=free_;
    free_=end;
    end=tmp;
  }
  else
  {
    WP *tmp=head;
    while(tmp){
      
      if(tmp->next==wp){
        tmp->next=wp->next;
        break;
      }else
      tmp=tmp->next;
    }
      
      wp->next=free_;
      free_=wp;
    
  }
}

void set_wp(char *arg, uint32_t value)   //set the watchpoint
{
  WP *newp = new_wp();
  newp->old_value = value;
  strcpy(newp->expr, arg);
  printf("Hardware watchpoint %d: %s\n", newp->NO, newp->expr);
}

void scan_wp()    //scan all watchpoints
{
  WP *tmp = head;
  //printf("hello\n");
  while(tmp)
  {
    bool success;
    uint32_t new_value = expr(tmp->expr, &success);
    //printf("hello\n");
    if(new_value != tmp->old_value)
    {
      printf("The watchpoint %d: %s has changed\n", tmp->NO, tmp->expr);
      printf("Old value = %u\n", tmp->old_value);
      printf("New value = %u\n", new_value);
      tmp->old_value = new_value;
      sc_pause();
      return;
    }
    tmp = tmp->next;
  }
  //return 0;
}
void display_wp()   //display all watchpoints
{
  WP *tmp = head;
  if(tmp == NULL)
    printf("No watchpoints.\n");
  else
  {
    printf("%-20s%-20s%-20s\n", "Num", "What", "Value");
    while(tmp)
    {
      printf("%-20d%-20s%-20u\n", tmp->NO, tmp->expr, tmp->old_value);
      tmp = tmp->next;
    }
  }
}
void delete_wp(int n)  //delete the watchpoint, its NO is n.
{
  WP *tmp = head;
  if(tmp == NULL)
    printf("The watchpoint for which NO is %d does't exist.\n", n);
  else
  {
    while(tmp->NO != n)
      tmp = tmp->next;
    if(tmp == NULL)
      printf("The watchpoint for which NO is %d does't exist.\n", n);
    else
    {
      free_wp(tmp);
      printf("Deleted success\n");
    }
  }
}