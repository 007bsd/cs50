#include<stdio.h>
#include<stdlib.h>

int main(void){

  // print simple list
  int list[3] = {3, 2, 1};
  for(int i=0; i<3; i++){
    printf("The old list without malloc is: %i\n", list[i]);
  }

// use the malloc for printing an array
  int* list1 = malloc(3*sizeof(int));
  if(list1 == NULL){
    return 1;
  }
  list1[0] = 4;
  list1[1] = 5;
  list1[2] = 6;

  for(int i=0; i<3; i++){
    printf("The old list with malloc is: %i\n", list1[i]);
  }
// declare another pointer and copy elements from above array and insert another array
  int* tmp = malloc(4*sizeof(int));
  if(tmp == NULL){
    return 1;
  }
  // copy old array element to the new array
  for(int i=0; i < 3; i++){
    tmp[i] = list1[i];
  }
  tmp[3] = 7;

  list1 = tmp;

//print the new list
  for(int i=0; i < 4; i++){
    printf("So the new list1 is: %i\n", list1[i]);
  }

 // using reaclloc. With reacllo you do not need to copy
 int* tmp1 = realloc(list1, 5*sizeof(int));
 if(tmp1 == NULL){
   return 1;
 }
 // initialize the element you want to copy
 tmp1[4] = 8;

 list1 = tmp1;
 //print the new list with realloc
 for(int i=0; i < 5; i++){
   printf("So the new list1 is realloc: %i\n", list1[i]);
   }
free(list1);
}
