#include <stdio.h>
#include <conio.h>

/*This program prints pattern: 
        5   4   3   2   1
        5   4   3   2
        5   4   3
        5   4
        5                           */
int main()
{
    int i, j;
    for(i=1; i<=5; i++)         //'i' incremets from 1 to 5. since outer loop needs to run 5 times
    {
        for(j=5; j>=i; j--)     //'j' decrements from 5 to i
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}