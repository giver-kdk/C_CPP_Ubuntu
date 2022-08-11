#include <stdio.h>

/*Odd Even function with return type and with no argument.*/
int check_oddeven();

void main()
{
    int number, check;
    check= check_oddeven();
    if(check==0)
    {
        printf("The number is Even.");
    }
    else if(check==1)
    {
        printf("The number is Odd");
    }
    
}
int check_oddeven()
{   int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num%2==0)
    {
        return(0);              //'0' indicates Even.
    }
    else
    {
        return(1);
    }
}