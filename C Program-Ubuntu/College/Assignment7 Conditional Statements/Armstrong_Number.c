#include <stdio.h>
#include <conio.h>

/*This program detcts 3 digit Armstrong number.*/
void main()
{
    int num, digit, sum=0, temp;
    printf("Enter number to be checked: ");
    scanf("%d", &num);
    temp=num;
    while(num!=0)
    {
        digit= num%10;
        sum= sum+ digit*digit*digit;
        num=num/10;
    }
    if(temp==sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
    getchar();
}