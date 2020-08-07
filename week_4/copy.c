#include<stdio.h>
#include<ctype.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    string s = get_string("s:");
    string t = s;

    t[0] = toupper(t[0]);

    printf("the s is %s:\n", s);
    printf("the t is %s\n", t);

    // copy with malloc

    char *st = get_string ("st:");
    char *tr = malloc(strlen(st)+1);

    for(int i = 0, n = strlen(st); i < n+1; i++){
        tr[i] = st[i];
    }
    tr[0] = toupper(tr[0]);
    printf("the st is %s\n", st);
    printf("the tr is %s\n", tr);

    // with strcpy

    strcpy(tr, st);
    printf("the st is %s\n", st);
    printf("the tr is %s\n", tr);

    // free the memory after allocating it
    free(tr);
}
