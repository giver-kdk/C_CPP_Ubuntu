#include <stdio.h>
#include <conio.h>

/*This program prints pattern: 
        1   2   3   4   5   
        1   2   3   4
        1   2   3
        1   2
        1                       */
int main()
{
    int i, j, n, sum;
    for(i=5; i>=1; i--)         //'i' decrements from 5 to 1
    {
        for(j=1; j<=i; j++)     //'j' increments from 1 to i
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}