#include<stdio.h>
#include<math.h>
#include<cs50.h>
#include<string.h>

void draw(int h);

int main(void){
    int height = get_int("Please enter the height\n");
    draw(height);
}

void draw(int h)
{
    for(int i =1; i <= h; i++)
    {
        for (int j =1; j <= i; j++){
            printf("#");
        }
        printf("\n");
    }
}
