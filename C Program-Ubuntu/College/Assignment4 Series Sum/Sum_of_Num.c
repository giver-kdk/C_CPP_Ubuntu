#include <stdio.h>
#include <conio.h>

/*This program displays sum of n numbers entered by user. */
int main()
{
    int i, num, sum=0;
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=0; i<=num; i++)       //Condition is to run the loop until i<='number entered by the user'.
    {
        sum=sum+i;        
    }
    printf("The sum of n numbers is: %d", sum);
}