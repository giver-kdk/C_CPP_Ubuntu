/* Program to find price of n mangos given the price of a dozen mangos.*/
#include <stdio.h>
#include <math.h>
#include <conio.h>
#define DOZEN 240

int main()
{
	int mangos;
	float price;
	printf("Price of a dozen mangos: %d\n", DOZEN);
	printf("Enter number of mangos: ");
	scanf("%d", &mangos);

	price = (DOZEN / 12) * mangos;

	printf("Price of %d mangos is: %.3f\n", mangos, price);
	getchar();
}