#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int i, j, initial, end, middle, array[5], temp;
	printf("Enter the elemenst of array: ");
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &array[i]);
	}

	for(i = 0; i < 5 - 1; i++)
	{
		for(j = 0; j < 5 - i - 1; j++)
		{
			if(array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	printf("\nThe ascending order is: ");
	for(i = 0; i < 5; i++)
	{
		printf("%d\t", array[i]);
	}

	printf("\nEnter the element to search: ");
	scanf("%d", &element);
	initial = 0;
	end = 5 - 1;
	while(1)
	{
		middle = (initial + end) / 2;
		if(array[middle] == element)
		{
			printf("Element found: %d", element);
			getchar();
			exit(0);
		}
		else if(array[middle] > element)
		{
			end = middle - 1;
		}
		else if(array[middle] < element)
		{
			initial = middle + 1;
		}
		if(middle > end)
		{
			printf("Element not found");
			exit(0);
		}
	}
	getchar();
}