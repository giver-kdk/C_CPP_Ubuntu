#include <stdio.h>
#include <conio.h>
#define SIZE 5
void reverse_array(int *ptr);
int main()
{
	int array[SIZE], i;
	printf("Enter 5 elements of array: ");
	for(i = 0; i < SIZE; i++)
	{
		scanf("%d", &array[i]);
	}

	reverse_array(array);

	printf("Reversed array:\n");
	for(i = 0; i < SIZE; i++)
	{
		printf("%d\t", array[i]);
	}
}
void reverse_array(int *ptr)
{
	int i, j, temp;
	for(i = 0, j = SIZE - 1; i != j; i++, j--)
	{	// Swap the first and last elements to reverse
		temp = *(ptr + i);
		*(ptr + i) = *(ptr + j); 
		*(ptr + j) = temp;
	}
}