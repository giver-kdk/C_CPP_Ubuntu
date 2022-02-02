#include <stdio.h>

/*Odd Even function with return type and with argument.*/
int check_oddeven(int num);

void main()
{
    int number, check;
    printf("Enter any number: ");
    scanf("%d", &number);
    check= check_oddeven(number);
    if(check==0)
    {
        printf("The number is Even.");
    }
    else if(check==1)
    {
        printf("The number is Odd");
    }
    
}
int check_oddeven(int num)
{  
    if(num%2==0)
    {
        return(0);              //'0' indicates Even.
    }
    else
    {
        return(1);
    }
}