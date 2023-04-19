/* Program to display first n natural numbers, their sum, and their average using all the three looping statements. */
#include <stdio.h>
#include <conio.h>

int main()
{
	int num, sum = 0, average, i;
	printf("Enter any number: ");
	scanf("%d", &num);

	printf("for loop:\n");
	for(i = 1; i <= num; i++)
	{
		printf("%d\n", i);
		sum = sum + i;
	}
	average = sum / num;
	printf("Sum is: %d\n", sum);
	printf("Average is: %d\n", average);

	sum = 0;
	i = 1;

	printf("while loop:\n");
	while(i <= num)
	{
		printf("%d\n", i);
		sum = sum + i;
		i++;
	}
	average = sum / num;
	printf("Sum is: %d\n", sum);
	printf("Average is: %d\n", average);
	
	sum = 0;
	i = 1;

	printf("do while loop:\n");
	do
	{
		printf("%d\n", i);
		sum = sum + i;
		i++;
	}while(i <= num);
	average = sum / num;
	printf("Sum is: %d\n", sum);
	printf("Average is: %d\n", average);
	getchar();
}