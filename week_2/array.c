#include <cs50.h>
#include <stdio.h>

void set_array(int y[4]);
void set_int(int x);

int main(void){

    int a = 100;
    int b[4] = {10, 20, 30, 40};
    set_int(a);
    set_array(b);
    printf("The value of a: %d, The value of b: %d", a, b[0]);
}

void set_array(int y[4]){
  y[0] = 22;
}

void set_int(int x){
  x = 10;
}
