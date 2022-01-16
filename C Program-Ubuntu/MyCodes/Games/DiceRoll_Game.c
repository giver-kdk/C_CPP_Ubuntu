#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int max=6, min=1, num;
    char play;
    srand(time(0));
    num= (rand() %(max-min+1))+ min;

    printf("Press 'P' to roll the Dice!!!:  ");
    play= getchar();
    while (play=='p')
    {
        num= (rand() %(max-min+1))+ min;
        printf("\n\t------The Dice showed %d-------", num);
        printf("\n\n\nPress 'P' to roll the Dice Again!!!:  ");
        play= getchar();
    
        }
    printf("\n\t------See You Soon------!!!");
    getche();
}

