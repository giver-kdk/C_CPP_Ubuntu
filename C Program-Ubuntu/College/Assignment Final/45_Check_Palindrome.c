/* Given an integer, write a program to check it for palindrome.*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int i, number, remainder, reverse = 0, temp;
	printf("Enter a integer number: ");
	scanf("%d", &number);
	temp = number;
	while(number != 0)
	{
		remainder = number % 10;
		reverse = (reverse * 10) + remainder;
		number = number / 10;
	}
	if(reverse == temp)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
	getchar();
}