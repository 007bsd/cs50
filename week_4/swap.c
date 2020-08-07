#include<stdio.h>


void swap(int *a, int *b);
int main(void){
    int x = 1;
    int y = 3;

    printf("the value of x:%i and y:%i\n", x, y);
    swap(&x, &y);
    printf("the value of x:%i and y:%i\n", x, y);
}

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
