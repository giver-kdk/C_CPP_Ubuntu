#include <stdio.h>

/*Function with no return type and no argument.*/
void do_addition(); //'void' means no any return type.

void main()
{
    do_addition();
}
void do_addition() //Both input-output process done inside the function.
{
    int a, b, sum;
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("\nThe sum of two numbers is: %d", sum);
}