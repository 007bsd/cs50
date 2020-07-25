#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("input: ");
    printf("outout: \n");

    //for (int i = 0; s[i] != '\0'; i++){
    int n = strlen(s);
    for (int i = 0, n = strlen(s); i < n; i ++) {
        printf("%c\n", s[i]);
    }
}
