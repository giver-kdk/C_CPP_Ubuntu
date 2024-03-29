#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int comparison = 0, swap = 0;

int partition(int a[50], int p, int r)
{
    int pivot = a[p];
    int i = p, j;
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
    int temp = a[p];
    a[p] = a[i];
    a[i] = temp;
    return i;
}
int randomized_partition(int a[50], int p, int r)
{
	// Generate random number within range of 'p' and 'r'
    int k = (rand() % (r - p + 1)) + p;
	swap++;
    int temp = a[p];
    a[p] = a[k];
    a[k] = temp;
    return partition(a, p, r);
}
void randomized_qs(int a[50], int p, int r)
{
    if(p < r)
    {
		comparison++;
        int q = randomized_partition(a, p, r);
        randomized_qs(a, p, q - 1);
        randomized_qs(a, q + 1, r);
    }
}
int main()
{
    srand(time(0));
    int i, n, a[50];
	printf("Enter number of elements: ");
	scanf("%d", &n);
    printf("Enter %d elements of array: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nBefore sorting: ");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    randomized_qs(a, 0, n - 1);
    printf("\nAfter sorting: ");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
	printf("\nTotal no. of comparisons: %d", comparison);
	printf("\nTotal no. of swaps: %d", swap);
	printf("\nName: Giver Khadka\tRoll No: 05\n");
}
