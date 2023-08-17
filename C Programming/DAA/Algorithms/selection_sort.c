/*This program sorts the array in ascending order using selection sort.
Algorithm for Selection Sort:

Step 1 − Set min to the first location
Step 2 − Search the minimum element in the array
Step 3 – swap the first location with the minimum value in the array
Step 4 – assign the second element as min
Step 5 − Repeat the process until we get a sorted array.*/
#include <stdio.h>
#define size 5

int main()
{
    int array[size], i, j, temp, min_index;
    printf("Enter any %d numbers: ", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    //Selection Sort
    for(i = 0; i < size - 1; i++)           //Allows total 4 passes
    {
        min_index = i;                  //Resets the value of 'min_index' on every iteration
        for(j = i; j < size - 1; j++)
        {
            if(array[min_index] > array[j + 1])
            {
                min_index = j + 1;              //Assigns the index number of small number
            }
        }
        temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;                    //Swaps the 'i'th and 'min_index"th elements
    }
    printf("The ascending order is: ");
    for(i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
}