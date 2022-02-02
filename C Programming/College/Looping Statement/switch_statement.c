#include <stdio.h>

/*This program simulates Calculator.*/
int main()
{
    int choice;
    printf("Which programming language you want to learn? ");
    printf("\n 1 for C program\t 2 for C++\t 3 for Java\t 4 for C#");
    scanf("%d", &choice);

    switch(choice)                      //Only executes the case which is equal to the variable.
    {
        case 1:
            printf("C Program");
            break;
        case 2:
            printf("C++ Program");
            break;
        case 3:
            printf("Java Program");
            break;
        case 4:
            printf("C# Program");
            break;
        default:                                //Executes when none of the case matches the variable.
            printf("You have entered an invalid choice!");

    }
}