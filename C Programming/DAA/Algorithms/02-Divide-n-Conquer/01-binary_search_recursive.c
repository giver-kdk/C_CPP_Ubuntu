// NOTE: Here, the array is assumed to be already sorted
#include <stdio.h>
#include <math.h>
int comparison = 0;

int binary_search(int a[50], int l, int h, int key)
{
	if (l <= h)
	{
		int mid = (l + h) / 2;
		comparison++;
		if (a[mid] == key) return (mid + 1);
		else if(a[mid] < key)
			return binary_search(a, mid + 1, h, key);
		else if (a[mid] > key)
			return binary_search(a, l, mid - 1, key);
	}
	else return -1;
}

int main()
{
	int a[50], i, n, l, h, key, loc;
	printf("Enter value of n: ");
	scanf("%d", &n);
	l = 0;
	h = n - 1;
	printf("\nEnter sorted array elements: ");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("\nEnter the key: ");
	scanf("%d", &key);
	loc = binary_search(a, l, h, key);
	printf("\nRequired Location: %d\n", loc);
	printf("\nTotal no. of comparisons: %d", comparison);
	printf("\nName: Giver Khadka\tRoll No: 05\n");
}