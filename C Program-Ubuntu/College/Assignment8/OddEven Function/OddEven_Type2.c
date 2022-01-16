#include <stdio.h>

/*Odd Even function with no return type and with argument.*/
void check_oddeven(int num);

void main()
{
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);
    check_oddeven(number);
}
void check_oddeven(int num)
{    
    if(num%2==0)
    {
        printf("The number is Even.");
    }
    else
    {
        printf("The number is Odd");
    }
}