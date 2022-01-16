#include <stdio.h>
#include <conio.h>

void india()                            //Since india() is called in nepal(). So, written above nepal().
{
    printf("\nI am in India");
}

void china()                       //Since china() is also called in nepal(). So, written above nepal().
{
    printf("\nI am in China");
}

void nepal()                              //Generally, user defined function is above 'main' function.
{
    printf("\nI am in Nepal");
    india();                        //Calling another function from user defined function.
    china();
}

void main()
{
    printf("I am in main function");
    nepal();
    printf("\nI am finally back in main function");
}

