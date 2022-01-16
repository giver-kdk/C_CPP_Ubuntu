/* Program to calculate the simple interest.
a) If balance is greater than 99999, interest is 7 %.
b) If balance is greater than or equal to 50000 and less than 100000interest is 5 %.
c) If balance is less than 50000, interest is 3%. */
#include <stdio.h>
#include <conio.h>

int main()
{
	float balance, interest, SI;
	printf("Enter the balance: ");
	scanf("%f", &balance);
	if(balance > 99999)
	{
		interest = 7;
	}
	else if((balance >= 50000) && (balance < 100000))
	{
		interest = 5;
	}
	else if(balance < 50000)
	{
		interest = 3;
	}

	SI = (balance * interest) / 100;

	printf("Interest is: %.3f %%\n", interest);
	printf("Simple Interest is: %.3f", SI);
	getchar();
}