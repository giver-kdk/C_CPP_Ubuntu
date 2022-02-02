#include <stdio.h>

void do_addition(int x, int y);     //'int x' and 'int y' are Arguments.

void main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    do_addition(a, b);
}
void do_addition(int x, int y)
{
    int z;
    z= x+y;
    printf("The sum is %d", z);          
}