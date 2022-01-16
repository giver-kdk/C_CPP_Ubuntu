/*This program takes unsorted array as input, then displays sorted array using selection sort:
1) The array is seen as two subarrays - one that is sorted, the other is unsorted, In the beginning, 
    the sorted subarray is empty and the entire given array is equivalent to unsorted array.
2) For each iteration, find the smallest element in the unsorted subarray, 
     and then swap it with leftmost unsorted element( thus keeping it in sorted position). 
     This element now becomes part of sorted subarray.
3) Repeat till the unsorted subarray becomes empty and the entire array gets sorted.*/
#include <stdio.h>
#define size 5

int main()
{
    int array[size], i, j, temp, small_size;
    printf("Enter any 5 numbers: ");
    for(i = 0; i <= size - 1; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i = 0; i <= size - 1; i++)
    {
        small_size = i;
        for(j = i+1; j <= size - 1; j++)
        {
            if(array[j] <= array[small_size])
            {
                small_size = j;
            }
        }
        if(small_size != i)
        {
            temp = array[i];
            array[i] = array[small_size];
            array[small_size] = temp;
        }
    }

    for(i = 0; i <= size - 1; i++)
    {
        printf("%d", array[i]);
    }
}