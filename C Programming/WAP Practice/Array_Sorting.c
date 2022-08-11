/* Sorting array in ascending order*/
#include <stdio.h>
#include <stdio_ext.h>

int main()
{
	int i, j, size, temp;
	printf("Enter the number of elements: ");
	scanf("%d", &size);
	int array[size];
	printf("Enter the elements of array: ");
	for(i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("The array elements are: ");
	for(i = 0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}
	for(i = 0; i < size - 1; i++)
	{
		for(j = 0; j < size - i - 1; j++)
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
	for(i = 0; i < size; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
	__fpurge(stdin);
	getchar();
}