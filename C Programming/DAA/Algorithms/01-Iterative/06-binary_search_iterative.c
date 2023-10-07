// C program to implement iterative Binary Search
#include <stdio.h>
int comparison = 0;

int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r)
	{
		int m = (l + r) / 2;
		comparison++;
		if (arr[m] == x) return m;
		if (arr[m] < x) l = m + 1;
		else r = m - 1;
	}
	return -1;
}

int main(void)
{
	// Sorted Array
	int arr[] = {2, 3, 6, 8, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 3;
	int result = binarySearch(arr, 0, n - 1, x);
	if(result == -1) printf("Element is not present in array");
	else printf("Element is present at index %d", result);
	printf("\nTotal no. of comparisons: %d", comparison);
	printf("\nName: Giver Khadka\tRoll No: 05\n");
	return 0;
}
