#include <stdio.h>

/*Function with return type and with argument.
NOTE: Argument for INPUT and ReturnType for OUTPUT.*/
int do_addition(int x, int y);                   

void main()
{
    int a, b, sum;
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);
    sum= do_addition(a, b);
    printf("\nThe sum of two numbers is: %d", sum);
}
int do_addition(int x, int y)                 
{
    int z;
    z= x+y;
    return(z);
}