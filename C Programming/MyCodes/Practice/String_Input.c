/*This program takes string input from the user upto certain limiy and displays output on screen.*/
#include <stdio.h>

int main()
{
    char array[100];
    fgets(array, 100, stdin);          //fgets(variable name, limit, input device)
    fputs(array, stdout);              //fputs(variable name, output device)
}