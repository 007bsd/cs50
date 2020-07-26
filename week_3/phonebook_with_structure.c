#include<stdio.h>
#include<cs50.h>
#include<string.h>

typedef struct{
    string names, numbers;
}person;

int main(void){
    person people[4];
    people[0].names = "EMAA";
    people[1].names = "DAS";
    people[2].names = "JOHN";
    people[3].names = "SIIRI";

    people[0].numbers = "000-0030-444";
    people[1].numbers = "22-33-44-55";
    people[2].numbers = "123-444-551";
    people[3].numbers = "994-44-541";

    for(int i =0; i < 4; i++){
        if(strcmp(people[0].names, "EMAA") ==0){
            printf("The number is %s", people[0].numbers);
            return 0;
        }
    }
    printf("The number not found");
    return 1;

}
