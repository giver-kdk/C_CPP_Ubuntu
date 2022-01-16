/* Program to find area and perimeter of a rectangle.*/
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	float length, breadth, area, perimeter;
	printf("Enter length of rectangle: ");
	scanf("%f", &length);
	printf("Enter breadth of rectangle: ");
	scanf("%f", &breadth);

	area = length * breadth;
	perimeter = 2 * (length + breadth);

	printf("Area of rectangle is: %.3f\n", area);
	printf("Perimeter of circle is: %.3f", perimeter);
	getchar();
}