#include <stdio.h>
#include <math.h>
int heapsize = 0, comparison = 0, swap = 0;

void max_heapify(int a[], int i)
{
	int largest = i;
	int L = 2 * i + 1;					// Get left node
    int R = 2 * i + 2;					// Get right node
	if(L < heapsize && a[L] > a[largest])
	{
		largest = L;
	}
	if(R < heapsize && a[R] > a[largest])
	{
		largest = R;
	}
	comparison++;
	if(largest != i)
	{
		swap++;
		int temp = a[i];
		a[i] = a[largest];
		a[largest] = temp;
		max_heapify(a, largest);
	}

}
void build_maxheap(int a[], int n)
{
	int i;
	heapsize = n;
	for(i = n/2 - 1; i >= 0; i--)
	{
		max_heapify(a, i);
	}

}
void heap_sort(int a[], int n)
{
	int i;
	build_maxheap(a, n);
	for(i = n - 1; i >= 0; i--)
	{
		swap++;
		int temp = a[i];
		a[i] = a[0];
		a[0] = temp;
		heapsize--;
		max_heapify(a, 0);
	}
}

int main()
{
	int array[10], num, i;
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
	heap_sort(array, num);
	printf("Array after sorting is: \n");
	for(i = 0; i < num; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\nTotal no. of comparisons: %d", comparison);
	printf("\nTotal no. of swaps: %d", swap);
	printf("\nName: Giver Khadka\tRoll No: 05\n");
}