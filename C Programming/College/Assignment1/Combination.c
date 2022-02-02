/*This program prints the combination(Permutation Combination) of n objects and r choices*/
#include <stdio.h>
#include <conio.h>

void main()
{
    long f1=1, f2=1, f3=1, comb;
    int  n, r, i;
    printf("\nEnter n and r:\t");
    scanf("%d %d", &n, &r);
    for(i=1;i<=n;i++)
        f1 = f1 * i;            //Factorial of n
    for(i=1;i<=n-r;i++)
        f2 = f2 * i;            //Factorial of (n - r)
    for(i=1;i<=r;i++)
        f3 = f3 * i;            //Factorial of r
    comb=f1/(f2*f3);            //Formula of combination
    printf("\n The combinations is:%ld", comb);
    getchar();
}
