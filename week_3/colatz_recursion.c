#include<stdio.h>
#include<cs50.h>

int collatz(int n);
int main(void)
{
    int var_colla = get_int("Please enter the collatz number\n");
    int result_colla = collatz(var_colla);
    printf("The value of collatz to reach the result 1 is %d\n", result_colla);
}

int collatz(int n)
{
    if(n == 1)
        return 0;
    else if((n%2) == 0)
    {
        return (1 + collatz(n/2));
    }
    else
    {
        return (1 + collatz(3*n+1));
    }
}
