#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// #include <graphics.h>

int main()
{
	int num, remainder;
	double sum = 0, temp;
	printf("Enter any number: ");
	scanf("%d", &num);
	temp = num;
	while(num != 0)
	{
		remainder = num % 10;
		sum = sum + pow(remainder, 3);
		num = num / 10;
	}
	if(sum == temp)
	{
		printf("Armstrong Number");
	}
	else
	{
		printf("Not Armstrong Number");
	}
}