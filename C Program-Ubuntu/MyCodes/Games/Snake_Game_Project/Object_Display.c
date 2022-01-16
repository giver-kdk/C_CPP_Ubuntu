#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>

void delay(int millisecond);
int main()
{
    char game[30][60];
    int i, j, k;
    for(i = 0; i < 29; i++)
    {
        for(j = 0; j < 59; j++)
        {
            game[i][j] = ' ';
        }
    }
    game[29][59] = '\0';
    // for(i = 15; i < 30; i++)
    // {
    //     game[15][i] = 'O';
    // }
    // if(i < 20)
    // {
    //     game[15][i] = 'O';
    // }
    // game[15][i] = 'O';
    // game[15][i - 5] = ' ';
    printf("\n\n\n\n\t");
    game[15][30] = '>';
    for(i = 0; i < 5; i++)
    {
        for(i = 0; i < 29; i++)
        {
            printf("\t");
            game[15][i] = 'O';
            for(j = 0; j < 59; j++)
            {
                printf("%c ", game[i][j]);
            }
            printf("\n");
            printf("\t");
        }
    }
    
    getchar();
}
void delay(int millisecond)
{
    clock_t starting_time = clock();
    while(clock() < starting_time + millisecond){}
}
