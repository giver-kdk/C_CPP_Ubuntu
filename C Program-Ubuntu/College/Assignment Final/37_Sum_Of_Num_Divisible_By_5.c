/* Program to find out sum of all numbers completely divisible by 5 among n numbers given by the user. */ 
#include <stdio.h>
#include <conio.h>

int main()
{
	int num, i, sum = 0;
	printf("Enter any number: ");
	scanf("%d", &num);

	for(i = 5; i <= num; i = i + 5)
	{
		sum = sum + i;
	}
	printf("Sum of numbers divisible by 5 is: %d", sum);
	getchar();
}