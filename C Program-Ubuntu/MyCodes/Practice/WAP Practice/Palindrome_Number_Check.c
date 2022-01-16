#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
// #include <graphics.h>

int main()
{
	int num, i, reverse = 0, temp, remainder;
	printf("Enter any number: ");
	scanf("%d", &num);
	temp = num;
	while(num != 0)
	{
		remainder = num % 10;
		reverse = (reverse * 10) + remainder;
		num = num / 10;
	}
	if(temp == reverse)
	{
		printf("The number is Palindrome");
	}
	else
	{
		printf("The number is not Palindrome");
	}
}