#include <stdio.h>

int main()
{
    int i, n, fac=1;
    printf("Enter any number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)           //condition is run the loop until 'i' is less than or equal to the entered number
    {
        fac=fac*i;             //assigning value to 'fac'
        
    }
    printf("Factorial is %d", fac);
}