/* Program to find the roots of a quadratic equation using discriminant.*/
#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	double a, b, c, discriminant, x1, x2, num1, num2;
	printf("Enter three co-efficients of quadratic equation: ");
	scanf("%lf%lf%lf", &a, &b, &c);

	discriminant = pow(b, 2) - (4 * a * c);
	if( discriminant > 0)
	{
		x1 = ((- b) + sqrt(discriminant)) / (2 * a);
		x2 = ((- b) - sqrt(discriminant)) / (2 * a);
		printf("The real roots are %.3lf and %.3lf", x1, x2);
	}
	else if( discriminant == 0)
	{
		x1 = (- b) / (2 * a);
		printf("The root is %.3lf", x1);
	}
	else if( discriminant < 0)
	{
		discriminant  = - discriminant;
		num1 = (- b) / (2 * a);
		num2 = sqrt(discriminant) / (2 * a);
		printf("The imaginary roots are:\n(%.3lf + %.3lf i) \tand \t (%.3lf - %.3lf i)", num1, num2, num1, num2);
	}
	getchar();
}