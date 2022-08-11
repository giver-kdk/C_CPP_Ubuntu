#include <stdio.h>

/*Odd Even function with no return type and with no argument.*/
void check_oddeven();

void main()
{
    check_oddeven();
}
void check_oddeven()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("The number is Even.");
    }
    else
    {
        printf("The number is Odd");
    }
}