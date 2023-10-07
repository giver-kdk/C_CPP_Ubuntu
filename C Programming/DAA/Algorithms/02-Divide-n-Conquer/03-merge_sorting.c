#include <stdio.h>
#include <math.h>
#define INFINITE 9999
int comparison = 0;

void merge(int a[], int l, int q, int r)
{
	int n1 = q - l + 1;
	int n2 = r - q;
	int i, j, k, L[20], R[20];
	for(i = 0; i < n1; i++)
	{
		L[i] = a[l + i];
	}
	for(j = 0; j < n2; j++)
	{
		R[j] = a[q + j + 1];
	}
	i = 0;
	j = 0;
	k = l;
    while (i < n1 && j < n2) {
		comparison++;
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        }
        else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    // Copy the elements of L[]
	while (i < n1) {
		comparison++;
        a[k] = L[i];
        i++;
        k++;
    }
  
    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
		comparison++;
        a[k] = R[j];
        j++;
        k++;
    }
}
void merge_sort(int a[], int l, int r)
{
	int q;
	comparison++;
	if(l < r)
	{
		q = (l + r) / 2;
		merge_sort(a, l, q);
		merge_sort(a, q + 1, r);
		merge(a, l, q, r);
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
	merge_sort(array, l, r);
	printf("Array after sorting is: \n");
	for(i = 0; i < num; i++)
	{
		printf("%d\t", array[i]);
	}
	printf("\nTotal no. of comparisons: %d", comparison);
	printf("\nName: Giver Khadka\tRoll No: 05\n");
}