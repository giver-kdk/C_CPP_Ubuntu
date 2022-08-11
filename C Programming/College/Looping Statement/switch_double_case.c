#include <stdio.h>

/*This program simulates Calculator.*/
int main()
{
    char choice;
    printf("Which color u want to display? ");
    printf("\n R or r for Red\t\t G or g for Green\t B or b for Blue: ");
    scanf(" %c", &choice);

    switch(choice)                      //Only executes the case which is equal to the variable.
    {
        case 'R':       //We can simply use two or more cases for single statement.
        case 'r':       //Statement runs when either of the cases is satisfied.
            printf("The colour is Red");
            break;
        case 'G':
        case 'g':
            printf("The colour is Green");
            break;
        case 'B':
        case 'b':
            printf("The colour is Blue");
            break;
        default:                                //Executes when none of the case matches the variable.
            printf("You have entered an invalid character!");

    }
}