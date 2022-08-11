/* Program to calculate discount. If purchased amount is greater than or equal to 1000,
discount is 5%. If purchased amount is less than 1000, discount is 3%.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	float amount, discount, finalPrice;
	printf("Enter your puchase amount: ");
	scanf("%f", &amount);

	if(amount >= 1000)
	{
		discount = 5;
	}
	else if(amount < 1000)
	{
		discount = 3;
	}
	finalPrice = amount - ((discount / 100) * amount);
	printf("Your discount is: %.1f%%\n", discount);
	printf("Your total amount is: %.3f", finalPrice);
	getchar();
}