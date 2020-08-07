#include<stdio.h>
//#include<cs50.h>

int main(void)
{
    int n = 50;
    printf("The address of n is:%p\n", &n);
    printf("The go to the address by star is:%i\n", *&n);

    int *p = &n;
    printf("The pointer address of n is:%p\n", p);
    printf("The go to the address of n is:%i\n", *p);

    // string with cs50.h library

    //string s = "EMMA";
    //printf("The string is :%s\n", s);

    char *s = "EMMA";
    printf("The value of the string is :%s\n", s);
    printf("The addres of the string is :%p\n", s);
    printf("The addres of the first string is :%p\n", &s[0]);
    printf("The addres of the second string is :%p\n", &s[2]);

    // to get the address of the string
    printf("Go to that string is :%c\n", *s);
    printf("Go to that string is :%c\n", *(s+1));
    printf("Go to that string is :%c\n", *(s+2));
    printf("Go to that string is :%c\n", *(s+3));
    printf("Go to that string is :%c\n", *(s+4));


}
