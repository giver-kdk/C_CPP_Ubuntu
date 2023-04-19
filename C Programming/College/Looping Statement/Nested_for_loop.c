#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, sum;
    for(i=1; i<=3; i++)         //for loop with possible i=1,2,3
    {
        for(j=1; j<=2; j++)     //nested for loop, loops for every individual loop in above for loop.
        {
            sum=i+j;
            printf("\t%d", sum);
        }
    }
}