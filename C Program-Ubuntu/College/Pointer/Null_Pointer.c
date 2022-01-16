/*Program to avoid illegal access of memory adrress using NULL Pointer*/
#include <stdio.h>
#define NULL ((void *)0)

int main()
{
    int *p = NULL;      //Can be float, double, char
    if(p == NULL)
    {
        printf("Condition Satisfied");
    }
}