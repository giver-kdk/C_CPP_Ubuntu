/* Program to find area and circumference of circle.*/
#include <stdio.h>
#include <math.h>
#include <conio.h>
#define PI 3.14159

int main()
{
	float radius, area, circumference;
	printf("Enter radius of circle: ");
	scanf("%f", &radius);

	area = PI * (radius * radius);
	circumference = 2 * PI * radius;

	printf("Area of circle is: %.3f\n", area);
	printf("Circumference of circle is: %.3f", circumference);
	getchar();
}