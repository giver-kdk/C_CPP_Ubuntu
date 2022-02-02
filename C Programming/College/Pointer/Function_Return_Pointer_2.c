/*This program uses function with pointer parameters and return pointer*/
#include <stdio.h>

int c;
int *add(int *x, int *y);           //Declares function that returns pointer(address)
int main()
{
    int a, b, *p;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    p = add(&a, &b);                //Assigns returned address from add function to 'p'
    printf("Sum of two numbers is: %d", *p);        //Prints value pointed by 'p'
}
int *add(int *x, int *y)
{
    // int c;                       //Since, the address of 'c' is to be returned to main function. So, 'c' can't be local variable
    c = (*x) + (*y);
    return (&c);
}
