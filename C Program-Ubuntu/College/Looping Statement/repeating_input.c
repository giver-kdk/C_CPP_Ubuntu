#include <stdio.h>

/*This program asks user to input number for multiple times.*/
int main()
{
    char choice='y';
    int num;
    while(choice=='y')      //Loop continues until 'choice'=='y'.
    {
        printf("Enter number: ");
        scanf("%d", &num);
        printf("The entered number is %d", num);
        printf("\nDo you want to enter another number?");
        scanf(" %c", &choice);
    }
}