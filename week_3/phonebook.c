#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void){
    string names[4] = {"EMMA", "DAS", "JOHN", "DAVID"};
    string numbers[4] = {"000-11-334", "001-345-556", "333-555-334", "939-333-44"};

    for(int i =0; i < 4; i++){
        if(strcmp(names[i], "EMMA") == 0){
            printf("The number of the name is %s", numbers[i]);
            return 0;
        }
    }
    printf("The number and name not match");
}
