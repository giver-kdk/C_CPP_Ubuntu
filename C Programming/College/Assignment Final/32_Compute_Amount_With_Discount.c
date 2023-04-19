/* . A cloth showroom has announced the following seasonal discounts on purchase of items
Purchase amount 									Discount
 										Mill cloth 				Handloom items
	0 – 100 								- 						5%
	101 – 200 								5% 						7.5%
	201 – 300 								7.5% 					10%
	Above 300 								10% 					15%
Write a program using switch and if statements to compute the net amount to be paid by a customer. */
#include <stdio.h>
#include <conio.h>

int main()
{
	int amount, cloth, netAmount;
	float discount;
	printf("Enter the purchase amount: ");
	scanf("%d", &amount);
	printf("Choose Cloth bought: 1) Mill Cloth\t2) Handloom Items: ");
	scanf("%d", &cloth);
	if(amount <= 100)
	{
		switch(cloth)
		{
			case 1:
				discount = 0;
				break;
			case 2:
				discount = 5;
				break;
			default:
				printf("Invalid!");
		}
	}
	else if(amount >= 101 && amount <= 200)
	{
		switch(cloth)
		{
			case 1:
				discount = 5;
				break;
			case 2:
				discount = 7.5;
				break;
			default:
				printf("Invalid!");
		}
	}
	else if(amount >= 201 && amount <= 300)
	{
		switch(cloth)
		{
			case 1:
				discount = 7.5;
				break;
			case 2:
				discount = 10;
				break;
			default:
				printf("Invalid!");
		}
	}
	else
	{
		switch(cloth)
		{
			case 1:
				discount = 10;
				break;
			case 2:
				discount = 15;
				break;
			default:
				printf("Invalid!");
		}

	}
	netAmount = amount - ((discount / 100) * amount);
	printf("Discount is: %.3f %%\n", discount);
	printf("The net amount to be paid is: %d", netAmount);
	getchar();
}