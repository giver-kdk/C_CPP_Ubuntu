#include <stdio.h>

int main()
{
    int number, reverse=0, remainder, i;
    printf("Enter the 6 digit number: ");
    scanf("%d", &number);
    for(i=1; i<=6; i++)
    {
        remainder= number%10;
        reverse= reverse*10+ remainder;
        number=number/10;
    }
    printf("The reversed number is %d", reverse);
}