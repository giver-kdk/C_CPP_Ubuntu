#include <stdio.h>

/*Factorial function with no return type and with argument.*/

int find_factorial();

void main()
{
    int fact;
    
    fact= find_factorial();
    printf("%d", fact);

}
int find_factorial()
{
    int i, factorial=1, num;
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        factorial= factorial* i;
    }
    printf("The factorial of %d is: ", num);            //Since, 'num' is not returned.
    return(factorial);
}