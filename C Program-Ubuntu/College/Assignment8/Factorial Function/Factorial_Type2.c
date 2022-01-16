#include <stdio.h>

/*Factorial function with no return type and with argument.*/

void find_factorial(int num);

void main()
{
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);
    find_factorial(number);
}
void find_factorial(int num)
{
    int i, factorial=1;
    
    for(i=1; i<=num; i++)
    {
        factorial= factorial* i;
    }
    printf("The factorial of %d is %d", num, factorial);
}