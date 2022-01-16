#include <stdio.h>

/*Prime function with no return type and with argument*/

void check_prime(int n);                //Function with one Parameter.

void main()
{
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);
    check_prime(number);
}
void check_prime(int num)
{
    int i=2;   
    while(i<=num-1)
    {
        if(num%i==0)
        {
            printf("The number is not Prime!");
            break;
        }
        i++;
    }
    if(i==num)
    {
        printf("The number is Prime!");
    }
}