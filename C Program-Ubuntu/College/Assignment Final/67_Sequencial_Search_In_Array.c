/* Program to search an element in array using sequential search.*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i, num, element;
	printf("Enter the number of elements: ");
	scanf("%d", &num);
	int array[num];
	printf("Enter any %d elements:\n", num);
	
	for(i = 0; i < num; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("Enter the element to search: ");
	scanf("%d", &element);

	for(i = 0; i < num; i++)
	{
		if(array[i] == element)
		{
			printf("Found Element: %d", element);
			getchar();
			exit(0);
		}
	}
	printf("Element not found");
	getchar();
}