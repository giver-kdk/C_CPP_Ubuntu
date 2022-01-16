#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
// #include <graphics.h>

int main()
{
	int i, j, num1, num2, count, greater;
	printf("Enter the 1st numbers: ");
	scanf("%d", &num1);
	printf("Enter the 2nd numbers: ");
	scanf("%d", &num2);
	if(num1 < num2)
	{
		i = num1;
		greater = num2;
	}
	else
	{
		i = num2;
		greater = num1;
	}
	printf("Prime numbers from %d to %d are: ", i, greater);
	while(i <= greater)
	{
		count = 0;
		for(j = 1; j <= i ; j++)
		{
			if(i % j == 0)
			{
				count++;
			}
		}
		if(count == 2)
		{
			printf("%d\t", i);
		}
		i++;
	}
}