/*This program uses free function for clearing up dynamic memory allocation*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, *p;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    p = (int*)calloc(n, sizeof(int));       
    //Error Check
    if(p == NULL)                           
    {
        printf("No Block was Created!");
        exit(0);
    }
    //Input Array Elements
    printf("Enter the elements in the Array:\n");
    for( i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    //Output Array Elements
    printf("The Array Elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", *(p + i));
    }
    //Free up memory space and check 
    free(p);
    //Check freed memory 
    printf("\nThe Array Elements after freed memory are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", *(p + i));
    }
    p = NULL;       //Converts dangeling pointer into NULL Pointer
}