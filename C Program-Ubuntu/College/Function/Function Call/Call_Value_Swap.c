#include <stdio.h>

void swap(int x, int y);

void main()
{
    int a, b;
    a=50;
    b=60;
    printf("Before the swap, value of a= %d", a);
    printf("\nBefore the swap, value of b= %d", b);
    swap(a, b);
    printf("\nAfter the swap, value of a= %d", a);          //Values of a and b are remained unchanged.
    printf("\nAfter the swap, value of b= %d", b);
}
void swap(int x, int y)
{
    int temp;
    temp= x;
    x= y;
    y= temp;
    printf("\nValue of x= %d", x);          //Value of x and y is swaped
    printf("\nValue of y= %d", y);
}