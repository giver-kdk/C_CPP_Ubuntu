#include <stdio.h>
int main()
{
    int b, h, A;                                //base and height of the triangle//
    printf("Enter the base of triangle: ");
    scanf("%d", &b);
    printf("Enter the height of triangle: ");
    scanf("%d", &h);
    A= 0.5*b*h;                                     //formula of area of triangle
    printf("The Area of the circle is: %d", A);
}