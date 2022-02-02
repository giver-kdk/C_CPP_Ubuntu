#include <stdio.h>
int main()
{
    int l, b, A;                                //base and height of the triangle//
    printf("Enter the length of rectangle: ");
    scanf("%d", &l);
    printf("Enter the bredth of rectangle: ");
    scanf("%d", &b);
    A= l*b;                                         //formula of area of rectangle
    printf("The Area of the circle is: %d", A);
}