#include <stdio.h>
#include <math.h>

int main()
{
	int i, num, temp;
	double sum = 0, remainder, count = 0, power = 1;
	printf("Enter any number: ");
	scanf("%d", &num);
	temp = num;
	while(num != 0)
	{
		num = num / 10;
		count++;
	}
	num = temp;
	while(num != 0)
	{
		remainder = num % 10;
		for(i = 1; i <= count; i++)
		{
			power = power * remainder;
		}
		sum = sum + power;
		num = num / 10;
		power = 1;
	}
	if(sum == temp)
	{
		printf("Armstrong Number\n");
	}
	else
	{
		printf("Not Armstrong Number\n");
	}
}