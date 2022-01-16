/*This program multiplies two numbers using function pointer of type double*/
#include <stdio.h>

double multiply(int x, int y);       //Function Declaration
void main()
{
    int a, b;
    double (*fptr)();       //Function pointer declaration
    double product;
    printf("\nEnter values of a and b:\t");
    scanf("%d %d", &a, &b);
    fptr = multiply;
    product = fptr(a, b);
    printf("\nMultiplication: %lf", product);
    //Check whether address stored in fptr is of 'multiply' function or not
    printf("\nAddress stored in function pointer: %u", fptr);
    printf("\nAddress of multiply function:       %u", &multiply);
}

double multiply(int x, int y)
{
    double product;
    product = x*y;
    return product;                     //Returns product result
}
