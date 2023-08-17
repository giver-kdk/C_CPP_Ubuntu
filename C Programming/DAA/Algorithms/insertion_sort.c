#include <stdio.h>

void insertion_sort(int a[], int n);
int main()
{
    int  n, i, a[50];
	printf("Enter value of n: ");
	scanf("%d", &n);
	printf("\nEnter %d elemenet in an array: ", n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nBefore Sorting: ");
	for(i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
    insertion_sort(a, n);
    //Output
    printf("\nAfter Sorting: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
	printf("\n");
	return 0;
}

void insertion_sort(int a[], int n)
{
	int i, j, temp;
	for(i = 1; i < n; i++)
	{
		j = i - 1;
		temp = a[i];
		while(temp < a[j] && j >= 0)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
}