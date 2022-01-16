/* Program to find simple interest.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	float p, t, r, SI;
	printf("Enter principle, time and rate: ");
	scanf("%f%f%f", &p, &t, &r);

	SI = (p * t * r) / 100;

	printf("Simple Interest is: %.3f", SI);
	getchar();
}