#include <stdio.h>

/*This file only consists user defined functions.*/

int do_addition(int x, int y)
{
    int sum;
    printf("Enter the first number");
    scanf("%d", &x);
    printf("Enter the second number");
    scanf("%d", &y);
    sum = x + y;
    return (sum);
}

int do_subtraction(int p, int q)
{
    int sub;
    printf("\nEnter the first number");
    scanf("%d", &p);
    printf("Enter the second number");
    scanf("%d", &q);
    sub = p - q;
    return (sub);
}
