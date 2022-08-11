#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, i, sum=0;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of final power: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++)
    {
        sum=sum+(pow(x, i));
    }
    printf("Sum of exponential series upto power %d is %d", n, sum);
}