#include <stdio.h>

/*PositiveNegative function with no return type and with argument.*/
void check_positivity(int num);

void main()
{
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);
    check_positivity(number);
}
void check_positivity(int num)
{    
    if(num>=0)
    {
        printf("The number is Positive.");
    }
    else
    {
        printf("The number is Negative.");
    }
}