#include <stdio.h>
#include <math.h>

void merge_sort(int a[], int l, int h)
{
	int pivot, p, q, temp;
	pivot = a[l];
	p = l;
	q = h;
	if(l >= h) return;
	while(p < q)
	{
		while(a[p] <= pivot && l < h)
		{p++;}
		while(a[q] > pivot)
		{q--;}
		if(p < q)
		{
			temp = a[p];
			a[p] = a[q];
			a[q] = temp;
		}
	}
	a[l] = a[q];
	a[q] = pivot;
	merge_sort(a, l, q - 1);
	merge_sort(a, q + 1, h);
}

int main()
{
	int array[10], num, i, l, h;
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
	h = num - 1;
	merge_sort(array, l, h);
	printf("Array after sorting is: \n");
	for(i = 0; i < num; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\n");
}