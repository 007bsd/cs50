#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdbool.h>

bool valid_triangle(int side1, int side2, int side3);

int main(void){
  int a = get_int("Please enter the value of side1\n");
  int b = get_int("Please enter the value of side2\n");
  int c = get_int("Please enter the value of side3\n");

  bool result;
  result = valid_triangle(a, b, c);
  if(result == 1){
      printf("true\n");
  }
  else{
    printf("false\n" );
  }

}

bool valid_triangle(int side1, int side2, int side3)
{
  int sum1, sum2, sum3;
  sum1 = side1 + side2;
  sum2 = side2 + side3;
  sum3 = side1 + side3;
  if (side1 > 0 && side2 > 0 && side3 > 0){
    if (sum1 > side3 || sum2 > side1 || sum3 > side2){
      return 1;
    }
    }
  return 0;
}
