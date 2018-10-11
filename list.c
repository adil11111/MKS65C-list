#include <stdio.h>
#include <stdlib.h>
#include "list.h"



void print_list(struct node * startP){
  struct node * curP = startP;
  printf("[");
  if (curP==NULL){
    printf("%d",0);
  }
  while(curP != NULL){
    printf("%d,",(*curP).num);
    curP = (*curP).next;
  }
  printf("]\n");
}

struct node * insert_front(struct node * oldStart, int value){
  struct node * newStart=malloc(sizeof(struct node));
  newStart -> num = value;
  newStart -> next = oldStart;
  return newStart;
}

struct node * free_list(struct node * start){
  struct node *curP = start;
  struct node *tempP = start;
  while(curP){
    curP = curP->next;
    free(tempP);
    tempP = curP;
  }
  return curP;
}


