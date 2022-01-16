#include <stdio.h>
#include <conio.h>

int main()
{
    int n, sum=0, i;
    printf("Enter any number: ");
    scanf("%d", &n);              

    for(i=1; i<=n; i++)
    {
        sum=sum+(i*i);          //sum ='sum' + square of 'i'
    }
    printf("Sum of square series is %d", sum);
}