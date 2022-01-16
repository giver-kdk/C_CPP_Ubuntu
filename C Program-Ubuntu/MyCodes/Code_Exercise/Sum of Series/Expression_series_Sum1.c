#include <stdio.h>

/*This program calculates the sum of series: 1x10+ 3x20+ 6x30+.....+ (N(N+1)/2)10N. */
int main()
{
    int i, num, sum=0, term;
    printf("Enter the value of n: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        term= ((i*(i+1))/2)*10*i;           //Expression for 'n'th term
        sum= sum+term;
    }
    printf("Sum of the series is %d", sum);
}