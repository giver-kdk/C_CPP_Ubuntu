#include <stdio.h>

/*PositiveNegative function with return type and with argument.*/
int check_positivity(int num);

void main()
{
    int check, number;
    printf("Enter any number: ");
    scanf("%d", &number);
    check= check_positivity(number);
    if(check==0)
    {
        printf("The number is Positive.");
    }
    else if(check==1)
    {
        printf("The number is Negative.");
    }
    
}
int check_positivity(int num)
{       
    if(num>=0)
    {
        return(0);                  //'0' indicates Positive
    }
    else
    {
        return(1);
    }
}