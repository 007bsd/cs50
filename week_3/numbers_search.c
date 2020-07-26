#include<stdio.h>
#include<cs50.h>

int main(void){
    int numbers[6] = {4, 8, 12, 45, 67, 50};
    for (int i =0; i < 6; i++){
        if(numbers[i] == 50){
            printf("number found\n");
            return 0;
        }
    }
    printf("number not found\n");
    return 1;
}
