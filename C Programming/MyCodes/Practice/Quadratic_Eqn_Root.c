#include <stdio.h>
#include<math.h>
#include <conio.h>
/*This program prints the roots of equatino ax^2+bx+c=0. */

void main()
{
    float x1, x2, a, b, c;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);      //first root formula
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);      //second root formula
    if(b*b-4*a*c>=0)
    {
        printf("The roots are %.3f and %.3f", x1, x2);
    }
    else
    {
    printf("There are no real roots for such equation.");
    }
}