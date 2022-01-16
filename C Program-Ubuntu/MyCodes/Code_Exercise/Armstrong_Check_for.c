#include <stdio.h>
#include <math.h>

/*This program checks whether a multidigit number is Armstrong Number or not.
Applicable for all Armstrong Numbers*/
int main()
{
    int n, t, sum=0, count=0, r;
    printf("Enter any number: ");
    scanf("%d", &n);

    for(t=n; t!=0; t=t/10)
    {
        
        count=count+1;
    }
    printf("Enter t is %d", count);
}