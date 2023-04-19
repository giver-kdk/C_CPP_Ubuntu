/* This program has a function 'AreaOdCircle() which acepts radius of float value and returns the area of the circle.
Uses this function to calculate area of two circles having different radii. (Use symbolic constant to define PI)*/
#include <stdio.h>
#define PI 3.14

float AreaOfCircle(float radius);

int main()
{
	float radius1, radius2;
	printf("Enter the radius of 1st circle: ");
	scanf("%f", &radius1);
	printf("Enter the radius of 2nd circle: ");
	scanf("%f", &radius2);
	printf("\nArea of 1st circle is %f\n", AreaOfCircle(radius1));
	printf("Area of 2nd circle is %f", AreaOfCircle(radius2));
}
float AreaOfCircle(float radius)
{
	float Area = PI * (radius * radius);
	return Area;
}