#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int number;
  struct node *next;
}
node;

int main(void){
  // List of size 0
  node *list = NULL;

  // Allocate memory the assign the value to the linked list
  node *n = malloc(sizeof(node));
  if(n == NULL){
    return 1;
  }
  n->number = 1;
  n->next = NULL;
  list = n;

  // Allocate memory then assign another value to the linked list1
  n = malloc(sizeof(node));
  if(n == NULL){
    return 1;
  }
  n->number = 2;
  n->next = NULL;
  list->next = n;

  // Allocate memory then assign another value to the linked list1
  n = malloc(sizeof(node));
  if(n == NULL){
    return 1;
  }
  n->number = 3;
  n->next = NULL;
  list->next->next = n;

  // print the list out

  for(node *tmp=list; tmp !=NULL; tmp=tmp->next){
    printf("The value of the linked list: %i\n", tmp->number);
  }

  // free list

  while(list !=NULL){
    node *tmp = list->next;
    free(list);
    list=tmp;
  }
}
