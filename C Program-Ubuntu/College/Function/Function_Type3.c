#include <stdio.h>

/*Function with return type and no argument.*/
int do_addition();                 

void main()
{
    int sum;
    printf("Before the function call");
    sum= do_addition();
    printf("\nThe sum of two numbers is: %d", sum);
    printf("\nAfter the function call");
}
int do_addition()                 
{
    int a, b, z;
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);
    z= a+b;
    return(z);              //Returns value to the calling function.
    
}