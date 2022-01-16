/*This program sorts array of real(float) numbersin descending order using 
        Bubbble Sort Algorithm in 3 decimal places. */
#include <stdio.h>
#define size 5

int main()
{
    float array[size], temp;
    int i, j;
    printf("Enter any %d elements: ", size);
    //Array Input
    for(i = 0; i <= size - 1; i++)
    {
        scanf("%f", &array[i]);
    }
    //Bubble Sort Algorithm
    for(i = size - 2; i >= 0; i--)          //Decrements 'i' by 4 times. Since, size = 5 
    {
        for(j = 0; j <= i; j++)             //Number of iteration depends on 'i'
        {
            //Swap the numbers 
            if(array[j] < array[j + 1])     //If current element is less than next element, then swap
            {
                temp = array[j];            
                array[j] = array[j + 1];
                array[j + 1] = temp;        
            }
        }
    }
    //Print Descending order sorted array
    for(i = 0; i <= size - 1; i++)
    {
        printf("%.3f\t", array[i]);
    }
}