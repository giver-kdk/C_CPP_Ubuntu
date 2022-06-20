/*This program calculates the factorial of entered number.*/
#include <stdio.h>

int do_factorial(int x);

void main()
{
    int num, factorial;
    printf("Enter the number: ");
    scanf("%d", &num);
    factorial = do_factorial(num);
    printf("Factorial of the number is %d", factorial);
}
int do_factorial(int num)
{
    if (num == 0) // Acts as condition to terminate recursion
    {
        return (1);
    }
    else
    {
        // Function repeatedly calls itself inside 'itself' causing looping effect.
        return (num * do_factorial(num - 1));
    }
}
