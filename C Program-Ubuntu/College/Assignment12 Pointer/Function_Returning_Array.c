/*This program passes an array of n pointers to floats and returns a newly created array that contains those n float values.*/
#include <stdio.h>
#define SIZE 5

float* refresh(float *fptr[]);                          //Function with array pointer as argument

float new[SIZE];
int main()
{
    float f[SIZE], *new_ptr, *ptr[SIZE];                 //Declare float array and pointer array
    int i, j;
    printf("Enter any %d array elements: ", SIZE);
    //Input Array
    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", &f[i]);
    }
    printf("Before Function Call...");
    printf("\nThe entered numbers are: ");
    //Output Array
    for(i = 0; i < SIZE; i++)
    {
        printf("%f\t", f[i]);
    }
    //Assign float Array address to Pointer
    for(i = 0; i < SIZE; i++)
    {
        ptr[i] = &f[i];
    }
    new_ptr = refresh(ptr);
    //Output Modified Array
    printf("\nAfter Function Call...");
    printf("\nThe numbers are: ");
    for(i = 0; i < SIZE; i++)
    {
        printf("%f\t", new_ptr[i]);
    }
}
float* refresh(float *fptr[])
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        new[i] = *(fptr[i]);                //Can be checked by new[i] = *(fptr[i]) + 1
    }
    return(new);
}