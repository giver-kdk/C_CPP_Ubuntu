/*This program sorts array elements using selection sort function*/
#include <stdio.h>

int selection_sort(int a[], int n);
int main()
{
    int size = 5;
    int array[size], i, j, temp, min_index;
    //Input
    printf("Enter any %d numbers: ", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    //Function Call
    selection_sort(array, size);
    //Output
    printf("The ascending order is: ");
    for(i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
}
int selection_sort(int a[], int n)
{
    int i, j, min_index, temp;
    //Selection Sort
    for(i = 0; i < n - 1; i++)           //Allows total 4 passes
    {
        min_index = i;                  //Resets the value of 'min_index' on every iteration
        for(j = i; j < n - 1; j++)
        {
            if(a[min_index] > a[j + 1])
            {
                min_index = j + 1;              //Assigns the index number of small number
            }
        }
        temp = a[min_index];
        a[min_index] = a[i];
        a[i] = temp;                    //Swaps the 'i'th and 'min_index"th elements
    }                       //Here, changes made in 'a[i]' is automatically reflected in 'array[size]'
}