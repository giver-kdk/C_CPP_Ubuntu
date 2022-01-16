/* Program to find the rupee equivalent of U.S. dollars.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	float dollar, rupee;
	printf("Enter amount in US dollar: ");
	scanf("%f", &dollar);

	rupee = 118.52 * dollar;

	printf("Amount in Nepali Rupee: %.3f", rupee);
	getchar();
}