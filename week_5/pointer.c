#include<stdio.h>
#include<stdlib.h>

int main(void){
  int *x ;  // declaration of the pointer
  int *y;   // decalaration of the pointer

  x = malloc(sizeof(int));  // allocating heap memory to the pointer
  *x = 42;   // assigning a value to the pointer by * and derefferencing the pointer
  printf("The Value of x %d\n", *x );
  printf("The address of x %p\n", x );
  y = x;
  *y = 55;
  printf("XXXXXXXXXX\n");
  printf("The Value of x %d\n", *x );  // Once y = x, both the value of x and y have changed
  printf("The address of x %p\n", x );
  printf("The Value of y %d\n", *y );
  printf("The address of y %p\n", y );


  int data[5] = {5, 4, 3, 2, 1};

  for (int i = 0; i < 5; ++i)
    printf("The array value by pointer: %d\n", *(data+i)+1);

  free(x);

  printf("XXXXXXXXXX After freeing\n");
  printf("The Value of x %d\n", *x );  // The value should be zero
  printf("The address of x %p\n", x );
  printf("The Value of y %d\n", *y );   // The value should be zero
  printf("The address of y %p\n", y );
}
