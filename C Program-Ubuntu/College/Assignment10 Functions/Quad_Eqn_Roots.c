/*This program computes real and imaginary roots of quadratic equation*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
void quad(float, float, float);
void main()
{
float a, b, c;

printf("\n Enter values a, b and c of the quadratic equation:");
scanf("%f %f %f", &a, &b, &c);
quad(a, b, c);
getchar();
}
void quad(float a, float b, float c)
{
float p, q;
float d;
d = b*b-4*a*c;

if(d<0)
	{
	printf("\n Imaginary Roots.");
	d = sqrt(fabs(d));    //compute absolute value of discriminant
	p = -b/(2*a);
	q = d/(2*a);
	printf("\nRoot1 = %.2f +i %.2f",p,q);
	printf("\nRoot2 = %.2f -i %.2f",p,q);
	}
else
	{
	printf("\nRoots are real.");
	d = sqrt(d);
	p = (-b+d)/(2*a);
	q = (-b-d)/(2*a);
	printf("\nRoot1 = %.2f \t Root2 = %.2f",p,q);
	}
}
