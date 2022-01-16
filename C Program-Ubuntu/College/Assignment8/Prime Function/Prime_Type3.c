#include <stdio.h>

/*Prime function with return type and with no argument*/

int check_prime();

void main()
{
    int check;
    check=check_prime();
    if(check==0)
    {
        printf("The number is not Prime!");
    }
    else if(check==1)
    {
        printf("The number is Prime!");
    }
}
int check_prime()
{
    int i=2, num, result;
    printf("Enter any number: ");
    scanf("%d", &num);
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
        return(1);           //'1' indicates Prime
    }
}