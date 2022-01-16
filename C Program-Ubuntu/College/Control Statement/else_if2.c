#include <stdio.h>
#include <conio.h>
/*This programs checks whether the number is positive, negative or zero using else_if statement*/
void main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num>0)                                   //checks whether the number is greater than '0' or not
    {
        printf("Entered number is positive");

    }
    else if(num==0)                         //checks whether the number is equal to '0' or not
    {
        printf("Entered number is zero");
    }
    else
    {
        printf("Entered number is negative");
    }
    printf("\nGoodBye"); 
    getchar();

}