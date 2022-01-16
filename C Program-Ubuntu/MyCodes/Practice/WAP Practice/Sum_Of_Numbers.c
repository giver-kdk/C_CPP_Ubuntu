#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
// #include <graphics.h>

int main()
{
	int num, i, sum = 0, average;
	printf("Enter the value of n: ");
	scanf("%d", &num);
	for(i = 1; i <= num; i++)
	{
		sum = sum + i;
	}
	average = sum / num;
	printf("Sum of %d natural numbers: %d\n", num, sum);
	printf("Average value is: %d", average);
}