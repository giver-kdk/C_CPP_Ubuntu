#include <stdio.h>

/*This program calculates the sum of 1+11+111+....+n.*/
int main()
{
    int i, num, sum=0, term=1;
    printf("Enter the number of terms n: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        sum=sum+term;
        term=term*10+1;           //'term' becomes '11', '111' and son on.
    }
    printf("Sum of the series is %d", sum);
}