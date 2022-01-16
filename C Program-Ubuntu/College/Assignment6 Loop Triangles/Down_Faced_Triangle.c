#include <stdio.h>

/*This program prints down faced triangular pattern.*/
int main()
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=5; j>=i; j--)         //Number of stars(looping) controlled by 'i'.
        {
            printf("*\t");
        }
        printf("\n");
    }
}