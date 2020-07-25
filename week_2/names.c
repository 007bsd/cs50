#include <stdio.h>
#include <cs50.h>

int main(void) {

  string names[3];
  names[0] = "DAS";
  names[1] = "HARI";
  names[2] = "HAPPY";

  printf("The name valus is:%s\n", names[0]);
  printf("The character valus is:%c%c%c%i\n", names[0][0], names[0][1], names[0][2], names[0][3]);
//the string always ends with null character or \0
}
