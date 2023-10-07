/*This program sorts the array elements in ascending order using bubble sorting(Clz)*/
#include <stdio.h>
int comparison = 0, swap = 0;

int main()
{
    int n, i, j, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n];
    //Input
    printf("Enter any %d numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    //Bubble Sort
    for(i = 0; i < n - 1; i++)
    {
		int count = 0;
        for(j = 0; j < (n - 1) - i; j++)
        {
			comparison++;
            if(array[j] > array[j + 1])         //if(array[j]<array[j+1]) for Descending
            {
				swap++;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
				count  = 1;
            }
        }
		if(count == 0) break;
    }
    //Output
    printf("The ascending order is: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
	printf("\nTotal no. of comparisons: %d", comparison);
	printf("\nTotal no. of swaps: %d", swap);
	printf("\nName: Giver Khadka\tRoll No: 05\n");
}