#include <stdio.h>

/*Prime function with no return type and with no argument*/
void check_prime();

void main()
{
    check_prime();
}
void check_prime()
{
    int i=2, num;
    printf("Enter any number: ");
    scanf("%d", &num);
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