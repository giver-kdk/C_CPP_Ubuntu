/*This program shows that incrementing pointer increments address block*/
#include <stdio.h>

int main()
{
    int i;
    float *fptr, x;
    fptr = &x;

    printf("Enter the x: ");
    scanf("%d", fptr);
    printf("\nThe value of x: %f", *fptr);
    printf("\nAddress of x: %u", fptr);
    
    for(i = 0; i < 5; i++)
    {
        printf("\nIncremented Address: %u\t", fptr++);  //Incremnts Address by size of x(float)
    }
}