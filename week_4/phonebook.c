#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void){

    // open a file
    FILE *file = fopen("phonebook_example.csv", "a");

    // input from the user
    char *name = get_string("Please enter the name:");
    char *number = get_string("Please enter the number:");

    // write to the file
    fprintf(file, "%s,%s\n",name, number);
    // close the file
    fclose(file);

}
