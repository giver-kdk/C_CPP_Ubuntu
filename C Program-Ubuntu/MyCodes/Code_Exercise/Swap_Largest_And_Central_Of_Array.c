/*This program swaps largest number of an array by its central element.Functions used are:
* largest - To return pointer to largest element in an array.
* mid     - To return pointer to central element in an array.
* swap    - To recieve pointers to largest and central elements and swap them.*/
#include <stdio.h>
#define size 5

int *largest(int a[]);
int *mid(int b[]);
int swap(int *large, int *mid);

int main()
{
    int i;
    int array[size];
    //Input Array
    printf("Enter any %d elemenst:\n", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    swap(largest(array), mid(array));
    //Output Swaped Array 
    printf("Array after largest element swapped with mid element is:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
}
int *largest(int a[])
{
    int i, large, max_index, *large_ptr;
    max_index = 0;
    large = a[0];
    for(i = 0; i < size - 1; i++)
    {
        if(a[i + 1] > large)
        {
            max_index = i + 1;
        }
    }
    large_ptr = &a[max_index];
    return (large_ptr);
}
int *mid(int b[])
{
    int mid_index, *mid_ptr;
    mid_index = (size - 1) / 2;
    mid_ptr = &b[mid_index];
    return (mid_ptr);
}
int swap(int *large, int *mid)
{
    int temp;
    if(*mid < *large)
    {
        temp = *large;
        *large = *mid;
        *mid = temp; 
    }
}
