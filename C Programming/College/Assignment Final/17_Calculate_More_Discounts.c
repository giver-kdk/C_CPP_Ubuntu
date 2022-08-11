/* Program to calculate discount
a) If purchased amount is greater than or equal to 5000, discount is 10%
b) If purchased amount is greater than or equal to 4000 and less than 5000, discount is 7%
c) If purchased amount is greater than or equal to 3000 and less than 4000, discount is 5%
d) If purchased amount is greater than or equal to 2000 and less than 3000, discount is 3%
e) If purchased amount is less than 2000, discount is 2%. */ 
#include <stdio.h>
#include <conio.h>

int main()
{
	float amount, discount, finalPrice;
	printf("Enter your puchase amount: ");
	scanf("%f", &amount);

	if(amount >= 5000)
	{
		discount = 10;
	}
	else if((amount >= 4000) && (amount < 5000))
	{
		discount = 7;
	}
	else if((amount >= 3000) && (amount < 4000))
	{
		discount = 5;
	}
	else if((amount >= 2000) && (amount < 3000))
	{
		discount = 3;
	}
	else if(amount < 2000)
	{
		discount = 2;
	}
	finalPrice = amount - ((discount / 100) * amount);

	printf("Your discount is: %.1f%%\n", discount);
	printf("Your total amount is: %.3f", finalPrice);
	getchar();
}