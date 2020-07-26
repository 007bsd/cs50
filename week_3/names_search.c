#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void){
    string names[4] = {"EMMA", "DAS", "JOHN", "DAVID"};

    for (int i = 0; i < 4; i++){
        if(strcmp(names[i], "EMMA") == 0){
            printf("String found");
            return 0;
        }
    }
    printf("String not found");
    return 1;
}
