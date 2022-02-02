#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
// #include <graphics.h>

int main()
{
	int num, i, count = 0;
	printf("Enter any number: ");
	scanf("%d", &num);
	for(i = 1; i <= num; i++)
	{
		if(num % i == 0)
		{
			count++;
		}
	}
	if(count == 2)
	{
		printf("Prime");
	}
	else
	{
		printf("Not Prime");
	}
}