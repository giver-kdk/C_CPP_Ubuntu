/* Jet Company gives 5% commission to its salesman if their monthly sales are less than Rs.
10,000 and a 10% commission if it is equal to or greater than Rs. 10,000. Write a program to
calculate commission at the end of the month.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	float sales, commission, amount;
	printf("Enter the monthly sales: ");
	scanf("%f", &sales);
	if(sales < 10000)
	{
		commission = 5;
	}
	else 
	{
		commission = 10;
	}
	amount = (commission / 100) * sales;
	printf("%.3f %% commission is recieved.\n", commission);
	printf("The commission amount is: %.3f", amount);
	getchar();
}