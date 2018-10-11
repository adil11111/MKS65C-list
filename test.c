#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  struct node *start = NULL;
  printf("Printing with no elements:");
  print_list(start);

  start = insert_front(start,100);
  printf("Printing with one element:");
  print_list(start);

  start = insert_front(start,1000);
  printf("Printing with two elements:");
  print_list(start);

  start = free_list(start);
  printf("Freeing list and printing:");
  print_list(start);
    

  return 0;
}
