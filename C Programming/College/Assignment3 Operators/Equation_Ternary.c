#include <stdio.h>
#include <conio.h>

void main()
{
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    y= x>0? (2*x+3): (2*x-3);               //Conditional Operator
    printf("The value of y is: %d", y);
}\