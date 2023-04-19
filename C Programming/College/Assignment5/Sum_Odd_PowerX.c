#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, sum=0, i;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of final power: ");
    scanf("%d", &n);
    for(i=1; i<=n; i=i+2)
    {
        sum=sum+(pow(x, i));
    }
    printf("Sum of exponential series upto odd power is %d",sum);
}