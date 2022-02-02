#include <stdio.h>
#include <conio.h>

void add()                              //Generally, user defined function is above 'main' function.
{
    printf("\nI am in Addition");
}
void sub()                              
{
    printf("\nI am in Subtraction");
}
void div()                             
{
    printf("\nI am in Division");
}


void main()                                     //Compiler starts execution from 'main' function.
{
    printf("I am in main function");
    add();                              //Calls add() function
    sub();                              //Calls sub() function
    div();                              //Calls div() function
    printf("\nNow, I am back in main!");  //Control back to 'main' function after executing calling functions.
}

