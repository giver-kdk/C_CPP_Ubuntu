#include <stdio.h>

/*Factorial function with return type and with argument.*/

int find_factorial(int num);

void main()
{
    int number, fact;
    printf("Enter any number: ");
    scanf("%d", &number);
    fact= find_factorial(number);
    printf("The factorial of %d is %d",number, fact);

}
int find_factorial(int num)
{
    int i, factorial=1;
    
    for(i=1; i<=num; i++)
    {
        factorial= factorial* i;
    }
    return(factorial);
}