/*This program uses function to pass array of multiple pointers pointing to multiple floats.*/
#include <stdio.h>
#define SIZE 5

void increment(float *fptr[]);                  //Function with array pointer as argument

int main()
{
    float f[SIZE], *ptr[SIZE];                 //Declare float array and pointer array
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
    increment(ptr);
    //Output Modified Array
    printf("\nAfter Function Call...");
    printf("\nThe numbers are: ");
    for(i = 0; i < SIZE; i++)
    {
        printf("%f\t", f[i]);
    }
}
void increment(float *fptr[])
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        (*fptr[i])++;               //Increment value pointed by ith pointer.(Bracket required)
    }
}