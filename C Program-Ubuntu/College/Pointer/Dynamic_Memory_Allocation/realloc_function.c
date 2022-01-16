/*This program uses realloc function for dynamic memory allocation.
NOTE: realloc() function return a void pointer. So, we cast the pointer during initialization*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n = 4, *p;
    p = (int*)calloc(n, sizeof(int));  
    printf("Address of old pointer is: %u", p);
    printf("Initial size of the array is %d", n);
    //Error Check
    if(p == NULL)                         
    {
        printf("\nNo Block was Created!");
        exit(0);
    }
    printf("\nInitial Address of pointer is : %u\n", p);
    //Input Initial Array Elements 
    printf("\nEnter the elements in the Array:\n");
    for( i = 0; i < n; i++)
    {
        printf("\nEnter the elements for index %d: ", i);
        scanf("%d", p + i);         //"p + i' virtually equivalent to p++
    }
    printf("\nIncreasing the size of array by 6 elements...");
    p = (int *) realloc(p, (n + 6) * sizeof(int));
    printf("\nNew Allocated Address is: %u", p);              //Can be same as initial address
    //Error Check
    if(p == NULL)                           
    {
        printf("\nNo Block was Created!");
        exit(0);
    }
    //Input Extra Array Elements
    printf("\nEnter 6 extra elements in the Array:\n");
    for( i = i; i < n + 6; i++)
    {
        printf("\nEnter the elements for index %d: ", i);
        scanf("%d", p + i);        
    }
    printf("\nThe elements of array are:\n");
    for( i = 0; i < n + 6; i++)
    {
        printf("%d\t", *(p + i));           //Bracket in *(p + i) is mandatory
    }
    free(p);
    p = NULL;                             //Converts dangeling pointer into NULL Pointer

}