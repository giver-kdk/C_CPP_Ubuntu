/* 10. Program to convert pounds to kilograms.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	float pound, kilogram;
	printf("Enter weight in pound: ");
	scanf("%f", &pound);

	kilogram = pound / 2.2046;

	printf("Weight in Kilogram: %.3f", kilogram);
	getchar();
}