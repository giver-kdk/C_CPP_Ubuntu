#include <stdio.h>

struct rectangle
{
	int length;
	int breadth;
}rect;

int main()
{
	float area;
	printf("Enter length of rectangle: ");
	scanf("%d", &rect.length);
	printf("Enter breadth of rectangle: ");
	scanf("%d", &rect.breadth);
	area = rect.length * rect.breadth;
	printf("Area of rectangle is: %.3f", area);
}