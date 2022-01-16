/*This program uses calloc function for dynamic memory allocation
NOTE: calloc() function return a void pointer. So, we cast the pointer during initialization
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0, i, n, *p, *p1;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    p = (int*)calloc(n, sizeof(int));        //Allocates 'n' block of memory space for integers and 'p' points to base address
    p1 = p;                                 //Store initially pointed address
    //Display error if pointer points to NULL address
    if(p == NULL)                           //Checks if memory block is created or not
    {
        printf("No Block was Created!");
        exit(0);
    }
    //Input Array Elements and Add those elements
    printf("Enter the elements in the Array:\n");
    for( i = 0; i < n; i++)
    {
        scanf("%d", p);
        sum = sum + *p;
        p++;
    }
    //Output Array Elements
    printf("The Array Elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", *p1);
        p1++;
    }
    printf("\nSum of elements is: %d", sum);
    free(p);                                //Memory de-allocation               
    p = NULL;                           //Converts dangeling pointer into NULL Pointer
}