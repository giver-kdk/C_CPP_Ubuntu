/* Write a program to calculate area and perimeter of a rectangle using macros*/
#include <stdio.h>
#include <conio.h>
// Defininf macros

#define AREA(length, breadth) (length * breadth)			// Macro with parameters
#define PERIMETER(length, breadth) (2 * (length + breadth))

int main()
{
	float l, b, area, perimeter;
	printf("Enter the length of rectangle: ");
	scanf("%f", &l);
	printf("Enter the breadth of rectangle: ");
	scanf("%f", &b);
	area = AREA(l, b);										// Macro parameter can be of any data type
	perimeter = PERIMETER(l, b);
	printf("Area of circle is: %.3f\n", area);
	printf("Circumference of circle is: %.3f\n", perimeter);
	getchar();
}