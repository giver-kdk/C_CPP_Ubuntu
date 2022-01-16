#include <stdio.h>

/*Prime function with return type and with argument*/

int check_prime(int num);          //Declaring function having one Parameter/Argument.

void main()
{
    int number, check;
    printf("Enter any number: ");
    scanf("%d", &number);
    check=check_prime(number);
    if(check==0)
    {
        printf("The number is not Prime!");
    }
    else if(check==1)
    {
        printf("The number is Prime!");
    }
}
int check_prime(int num)
{
    int i=2, result;
    while(i<=num-1)
    {
        if(num%i==0)
        {
            return(0);           //Since, a value must be returned.Here, '0' indicates Not-Prime. 
            //break;            //'return' also breaks loop.
        }
        i++;
    }
    if(i==num)
    {
        return(1);          //'1' indicates Prime
    }
}