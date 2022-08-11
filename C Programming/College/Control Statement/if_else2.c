#include <stdio.h>
#include <conio.h>
/*This programs checks whether the number is positive or negative using if_else statement*/
void main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num>0)                                   //checks whether the number is greater than '0' or not
    {
        printf("Entered number is positive");

    }
    else
    {
        printf("Entered number is negative");
    }
    printf("\nGoodBye");                    // final statement independent of if_else conditions
    getchar();

}