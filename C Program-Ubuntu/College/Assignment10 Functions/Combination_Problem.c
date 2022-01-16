/*This program prints the combination of n objects and r choices using function*/
#include <stdio.h>
#include <conio.h>
long factorial(int n)
{
    long fact=1;
    int i;
    for(i=1;i<=n;i++)
        fact *= i;
    return fact;
}
void main()
{
    long f1=1,f2=1,f3=1,comb;
    int n, r;
    printf("\nEnter n and r:");
    scanf("%d %d",&n,&r);

    f1=factorial(n);
    f2=factorial(n-r);
    f3=factorial(r);

    comb=f1/(f2*f3);
    printf("\n The combination is: %ld", comb);
    getchar();
}
