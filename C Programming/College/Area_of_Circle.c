/*This program calculates the area of circle using formula*/
#include <stdio.h>

int main()
{
    int r, A;                                   //r i sradius of circle
    printf("Enter the radius of circle: ");
    scanf("%d", &r);
    A= 3.14*r*r;                                    //formula of area of circle
    printf("The Area of the circle is: %d", A);
}