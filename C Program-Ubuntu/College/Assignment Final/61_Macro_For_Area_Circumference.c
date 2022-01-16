/* Write macros to compute area and circumference of circle and make a program to use this macro.*/
#include <stdio.h>
#include <conio.h>
// Defininf macros
#define PI 3.14159
#define AREA(radius) (PI * (radius * radius))				// Macro with parameters
#define CIRCUMFERENCE(radius) (2 * PI * radius)

int main()
{
	float r, area, circumference;
	printf("Enter the radius of circle: ");
	scanf("%f", &r);
	area = AREA(r);											// Macro parameter can be of any data type
	circumference = CIRCUMFERENCE(r);
	printf("Area of circle is: %.3f\n", area);
	printf("Circumference of circle is: %.3f\n", circumference);
	getchar();
}