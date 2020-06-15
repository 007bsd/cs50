#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);

int main(void){

    int n = get_int("Please enter number of scores: ");
    int scores[n];

    for(int i=0; i < n ; i ++){
        scores[i] = get_int("Please enter the scores %i: ", i);
    }

    printf("average is %.1f:", average(n, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i=0; i < length; i++){
        sum += array[i];
    }
    return (float)sum / (float)length;
}
