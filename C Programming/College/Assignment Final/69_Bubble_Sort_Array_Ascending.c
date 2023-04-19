/* Program to sort numbers stored in an array using bubble sort in ascending order*/
#include <stdio.h>
#include <conio.h>
#define size 5
void main()
{
    int temp, i, j, array[size];            
    printf("Enter any five numbers: \n");
    for(i=0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=0; i < size; i++)     
    {
        for(j = 0; j < size - i - 1; j++)  
        {
            if(array[j] > array[j + 1])         
            {
                temp = array[j];                
                array[j] = array[j+1];  
                array[j+1] = temp;            
            }
        }
    }
    printf("\nThe ascending order is: \n");
    for(i=0; i<=size-1; i++)
    {
        printf("%d\n", array[i]);
    }
    getchar();
}