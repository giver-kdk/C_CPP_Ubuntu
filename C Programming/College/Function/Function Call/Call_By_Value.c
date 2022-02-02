#include <stdio.h>

/*This program calls the function from argument value.*/
void modify(int x);

void main()
{
    int a=7;
    printf("Before the function call, value of a= %d", a);
    modify(a);                                              //Fx call
    printf("\nAfter the function call, value of a= %d", a);
}
void modify(int x)
{
    x=x+5;
    printf("\nThe value of x is: %d", x);
}