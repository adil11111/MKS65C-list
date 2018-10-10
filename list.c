#include <stdio.h>
#include <stdlib.h>
#include "list.h"



void print_list(struct node * startP){
  struct node * curP = startP;
  while(curP -> next){
    printf("%d\n",(*curP).num);
    curP = (*curP).next;
  }
  printf("%d\n",(*curP).num);
}

int main(){
  struct node *firstP = malloc(sizeof(struct node));
  firstP -> num = 78;
  //printf("%d\n",(firstP -> num));
  
  struct node *secondP = malloc(sizeof(struct node));
  secondP -> num = 2;
  firstP ->next= secondP;
  secondP -> next = NULL;
  //printf("%d\n",(firstP->next->num));
  //printf("%d\n",(secondP->num));
  print_list(firstP);
  return 0;
}
