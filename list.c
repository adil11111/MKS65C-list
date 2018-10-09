#include <stdio.h>
#include <stdlib.h>


int main(){
  struct node { int num; struct node *next;};
  struct node first;
  malloc(sizeof(first));
  first.num=0;
  
  struct node second;
  malloc(sizeof(second));
  struct node *p=&second;
  first.next=p;
  return 0;
}
