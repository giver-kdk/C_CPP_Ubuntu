/*This program prints pattern: 
        1
        1   2
        1   2   3
        1   2   3   4
        1   2   3   4   5               */
#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j;
    for(i=1; i<=5; i++)             //'i' increments from 1 to 5. So, The output is printed in 5 rows(Outer loop)
    {
        for(j=1; j<=i; j++)         //'j' only increments 1 to i
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}









