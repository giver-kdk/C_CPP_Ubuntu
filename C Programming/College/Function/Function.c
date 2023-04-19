#include <stdio.h>
#include <conio.h>

void message()  //'message' is the called function.  //function is above 'main' function since not declared.
{
    printf("Hello! We are from Mars...We see you!");
}


void main()                 //'main' is the calling function.
{
    message();
    printf("I am in main function");
}

