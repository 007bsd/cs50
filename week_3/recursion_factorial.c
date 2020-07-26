#include<stdio.h>
#include<cs50.h>


int fact(int f);

int main(void){
    int factorial = get_int("Please enter your fact\n");
    int fact_result = fact(factorial);
    printf("The result is %d\n", fact_result);
}

int fact(int f){
    if(f == 1)
        return 1;
    else
        return (f * fact(f-1));
}
