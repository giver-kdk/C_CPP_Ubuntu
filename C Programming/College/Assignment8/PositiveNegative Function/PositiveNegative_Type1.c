#include <stdio.h>

/*PositiveNegative function with no return type and with no argument.*/
void check_positivity();

void main()
{
    check_positivity();
}
void check_positivity()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num>=0)
    {
        printf("The number is Positive.");
    }
    else
    {
        printf("The number is Negative.");
    }
}