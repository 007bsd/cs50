#include <cs50.h>
#include <stdio.h>

int set_local(int x);

int main(void){

    int x = 100;
    int y = set_local(x);
    printf("The value of the x and y : %d and %d\n", x, y);

}

int set_local(int x){
  return x *= 10;
}
