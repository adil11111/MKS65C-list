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

struct node * insert_front(struct node * oldStart, int value){
  struct node * newStart=malloc(sizeof(struct node));
  newStart -> num = value;
  newStart -> next = oldStart;
  return newStart;
}

/*struct node * free_list(struct node * start){
  struct node *curP = start;
  while(curP -> next){
    free(curP);
  }
  free(curP);
  return start;
  }*/




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
  //struct node * newStart=insert_front(firstP,21);
  //print_list(newStart);
  free_list(firstP);
  return 0;
}
