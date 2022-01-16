#include <stdio.h>

/*This program prints right facing triangular pattern.*/
int main()
{
    int i, j;
    for(i=1; i<=5; i++)         //Runs the outer loop 5 times
    {
        for(j=1; j<=i; j++)         //Number of looping controlled by updated value of 'i'
        {
            printf("*\t");
        }
        printf("\n");           //New line inside Outer loop
    }   
}