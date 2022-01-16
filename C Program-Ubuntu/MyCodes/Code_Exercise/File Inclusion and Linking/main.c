#include <stdio.h>
#include "include\\geometry.c"

int main()
{
	int len, length, breadth, radius;
	printf("Enter length of square: ");
	scanf("%d", &len);
	printf("Enter length of rectangle: ");
	scanf("%d", &length);
	printf("Enter breadth of rectangle: ");
	scanf("%d", &breadth);
	printf("Enter radius of circle: ");
	scanf("%d", &radius);
	printf("\nArea of square: %d", findSquareArea(len));
	printf("\nArea of recatngle: %d", findRectangleArea(length, breadth));
	printf("\nArea of square: %d", findCircleArea(radius));
}