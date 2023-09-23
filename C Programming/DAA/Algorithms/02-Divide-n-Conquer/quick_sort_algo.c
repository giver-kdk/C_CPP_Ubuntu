#include <stdio.h>
#include <math.h>


int partition(int a[50], int l, int r)
{
    int pivot = a[l];
    int i = l, j;
    for(j = i + 1; j <= r; j++)
    {
        if(a[j] <= pivot)
        {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
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
	printf("\n");
}