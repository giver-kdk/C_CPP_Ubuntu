/*This program sorts the array elements in ascending order using bubble sorting(Clz)*/
#include <stdio.h>

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
        for(j = 0; j < (n - 1) - i; j++)
        {
            if(array[j] > array[j + 1])         //if(array[j]<array[j+1]) for Descending
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    //Output
    printf("The ascending order is: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
}