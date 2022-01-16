/*Prints Pattern: 
1
2	3
4	5	6
7	8	9	10
11	12	13	14	15*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//#include <graphics>

int main()
{
	int num, i, j, k = 1;
	printf("Enter the number rows in floyd's pattern: ");
	scanf("%d", &num);
	for(i = 1; i <= num; i++)
	{
		for(j = 1; j <= i; j++, k++)
		{
			printf("%d\t", k);
		}
		printf("\n");
	}
}