#include <stdio.h>

/*This program prints left faced triangular pattern.*/
int main()
{
    int i, j, k;
    for(i=1; i<=5; i++)
    {
        //Print the empty spaces 
        for(j=1; j<=5-i; j++)           //Number of empty space(looping) controlled by 'i'.
        {
            printf("\t");
            
        }
        //Print the stars
        for(k=1; k<=i; k++)             //Number of stars(looping) controlled by 'i'.
        {
            printf("*\t");
        }
        
        printf("\n");
    }
}