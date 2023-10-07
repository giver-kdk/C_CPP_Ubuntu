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
            i++;
			swap++;
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
// Find the median of an array using insertion sort
int findMedian(int a[], int l, int r) {
    int n = r - l + 1;
    // Sort the subarray using bubble sort
	for(int i = l; i < r; i++)
    {
        for(int j = 0; j < r - i; j++)
        {
			comparison++;
            if(a[j] > a[j + 1])         
            {
				swap++;
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    // Median formula for grouped data
    int median = a[l + n / 2];
    return median;
}
int select_linear(int a[], int p, int r, int i)
{
	if (i > 0 && i <= r - p + 1)
	{
		int q = -1, n = r - p + 1;
        int numMedians = (n + 4) / 5;
        int medians[numMedians], mMedians;		// "mMedians" = median of Medians			
		// Find median of 5 elements of each group 
		for (int i = 0; i < numMedians; i++) {
            int start = p + i * 5;
            int end = start + 4;
            if (end > r) end = r;
            medians[i] = findMedian(a, start, end);
        }
		// Find median of median using recursion  
		if(numMedians == 1) mMedians = medians[0];
		else select_linear(medians, 0, numMedians - 1, numMedians / 2);
		// Find position of median of Medians
        for (int j = p; j <= r; j++) {
            if (a[j] == mMedians) {
                q = j;
                break;
            }
        }
		// Take a[q] to lowest index to make it a pivot
		swap++;
		int temp = a[p];
		a[p] = a[q];
		a[q] = temp;

		q = partition(a, p, r);
		int k = q - p + 1;
		comparison++;
		if(i == k) return a[q];
		if(i < k) return select_linear(a, p, q - 1, i);
		if(i > k) return select_linear(a, q + 1, r, i - k);
	}
}

int main()
{
	int a[10], num, i, l, r, result;
	printf("Enter the size of array: ");
	scanf("%d", &num);

	printf("Enter the elements of array: \n");
	for(i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
	}
	l = 0;
	r = num - 1;
	printf("Enter value of i for selection: ");
	scanf("%d", &i);

	result = select_linear(a, l, r, i);
	printf("\n%d th smallest select_lineared element is: %d", i, result);
	printf("\nTotal no. of comparisons: %d", comparison);
	printf("\nTotal no. of swaps: %d", swap);
	printf("\nName: Giver Khadka\tRoll No: 05\n");
}