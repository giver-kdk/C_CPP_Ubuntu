#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int comp = 0, swap = 0, n;

void print_arr(int a[50], int n)
{
	int i;
	printf("\nArray: ");
	for(i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
int partition(int a[50], int p, int r)
{
    int pivot = a[p];
    int i = p, j;
    for(j = i + 1; j <= r; j++)
    {
		comp++;
        if(a[j] <= pivot)
        {
            i++;
			swap++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
			print_arr(a, n);
        }
    }
    int temp = a[p];
    a[p] = a[i];
    a[i] = temp;
	print_arr(a, n);
    return i;
}
int randomized_partition(int a[50], int p, int r)
{
	// Generate random number within range of 'p' and 'r'
    int k = (rand() % (r - p + 1)) + p;
	printf("\nRandom Number: %d", k);
    int temp = a[p];
    a[p] = a[k];
    a[k] = temp;
	print_arr(a, n);
    return partition(a, p, r);
}
void randomized_qs(int a[50], int p, int r)
{
    if(p < r)
    {
        int q = randomized_partition(a, p, r);
        randomized_qs(a, p, q - 1);
        randomized_qs(a, q + 1, r);
    }
}
int main()
{
    srand(time(0));
    int i, a[50];
	printf("Enter number of elements: ");
	scanf("%d", &n);
    printf("Enter %d elements of array: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nBefore sorting: ");
    print_arr(a, n);
    randomized_qs(a, 0, n - 1);
    printf("\nAfter sorting: ");
    print_arr(a, n);
	printf("\nTotal number of comparison: %d", comp);
	printf("\nTotal number of swap: %d\n", swap);
}
