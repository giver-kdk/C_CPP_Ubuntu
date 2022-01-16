/*This program uses function to find largest number and returns it's address*/
#include <stdio.h>
#include <stdlib.h>

int *larger(int *x, int *y);
void main()
{
    int a = 100, b = 50, *p;
    p = larger(&a, &b);  //function call
    printf("%d",*p);
}

int *larger(int *x, int *y)
{
    if(*x > *y)
        return (x);  //address of a
    else
        return (y);  //address of b
}
