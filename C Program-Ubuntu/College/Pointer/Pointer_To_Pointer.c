/*Program for using Pointer to Pointer*/
#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr;
    int **ptr1;     //Extra '*' means points to double level of refrencing
    int ***ptr2;
    ptr = &a;
    ptr1 = &ptr;
    ptr2 = &ptr1;
    printf("Value of a: %d\n", *ptr);
    printf("Value of a: %d\n", **ptr1);
    printf("Value of a: %d\n", ***ptr2);
}