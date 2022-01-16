#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
// #include <graphics.h>

int main()
{
	int i , j;
	for(i = 1; i <= 7; i++)
	{
		for(j = i; j < 2*i; j++)
		{
			if(j > 9)
			{
				printf("%d\t", j % 10);
			}
			else
			{
				printf("%d\t", j);
			}
		}
		printf("\n");
	}
}