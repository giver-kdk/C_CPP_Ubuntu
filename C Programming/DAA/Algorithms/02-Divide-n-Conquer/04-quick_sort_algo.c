#include <stdio.h>
#include <math.h>
int comparison = 0, swap = 0;

int partition(int a[50], int l, int r)
{
    int pivot = a[l];
    int i = l, j;
    for(j = i + 1; j <= r; j++)
    {
		comparison++;
        if(a[j] <= pivot)
        {
			swap++;
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
	swap++;
    int temp = a[l];
    a[l] = a[i];
    a[i] = temp;
    return i;
}
void quick_sort(int a[], int l, int r)
{
	int q;
	if(l < r)
	{
		comparison++;
		q = partition(a, l, r);
		quick_sort(a, l, q - 1);
		quick_sort(a, q + 1, r);
	}
}

int main()
{
	int array[10], num, i, l, r;
	printf("Enter the size of array: ");
	scanf("%d", &num);

	printf("Enter the elements of array: \n");
	for(i = 0; i < num; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("Array before sorting is: \n");
	for(i = 0; i < num; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
	l = 0;
	r = num - 1;
	quick_sort(array, l, r);
	printf("Array after sorting is: \n");
	for(i = 0; i < num; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\nTotal no. of comparisons: %d", comparison);
	printf("\nTotal no. of swaps: %d", swap);
	printf("\nName: Giver Khadka\tRoll No: 05\n");
}