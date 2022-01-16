#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, *ptr1, *ptr2;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	ptr1 = (int *) calloc(n, sizeof(int));
	ptr2 = ptr1;
	printf("Enter the elements of array: ");
	for(i = 0; i < n; i++, ptr1++)
	{
		scanf("%d", ptr1);
	}
	printf("\nThe entered elements are: ");
	for(i = 0; i < n; i++, ptr2++)
	{
		printf("%d\t", *(ptr2));
	}
}