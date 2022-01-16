/*This program shows the pointer arithmetics*/
#include <stdio.h>

int main()
{
    int *p, x;
    p = &x;
    printf("Enter the x: ");
    scanf("%d", p);             //p = &x
    printf("\nThe value of x is %d", *p);
    printf("\nThe address of x is %u", p);
    printf("\np + 1 = %u", p + 1);      //Increment address by 1 * size of x(integer)
    printf("\np - 2 = %u", p - 2);  //Decrement address by 2 * size of x(integer)
}