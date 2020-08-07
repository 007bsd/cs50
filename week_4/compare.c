#include<stdio.h>
#include<cs50.h>

int main(void){
    // for integer
    int i = get_int("Please enter the value if i:");
    int j = get_int("Please enter the value of j:");

    if (i == j){
        printf("same\n");
    }
    else{
        printf("different\n");
    }

    // for stiring

    string s = get_string("please enter the value of the first string:");
    string t = get_string("Please enter the value if the second string:");

    if (s == t){
        printf("SAME\n");
    }
    else{
        printf("Different\n");
    }
}
