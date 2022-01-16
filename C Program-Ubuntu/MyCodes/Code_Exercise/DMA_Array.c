/*This program allocates memory dynamically for an array of double. 
Populates that array by taking numbers as input from the user. Write a function that takes this array 
and returns the sum of all elements. Call this function from inside main to print the sum of array elements.*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

double sum_array(double *p);

int main()
{
    double *ptr;
    ptr = malloc(SIZE * sizeof(double));        //'ptr' points to base address of allocated memory
    int i;
    printf("Enter the elements of array:\n");
    for(i = 0; i < SIZE; i++)
    {
        scanf("%lf", (ptr + i));           
    }
    printf("Sum of array elements: %lf", sum_array(ptr));       //Address stored by 'ptr' sent to '*p'

}
double sum_array(double *p)     
{
    int i;
    double sum = 0;
    for(i = 0; i < SIZE; i++)
    {
        sum = sum + *(p + i);           //Adds value pointed by (p + i) 
    }
    return(sum);
}