#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
// #include <graphics.h>

int main()
{
	int i = 1, j, num, count;
	printf("Enter the number of prime numbers: ");
	scanf("%d", &num);
	while(i <= num)
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