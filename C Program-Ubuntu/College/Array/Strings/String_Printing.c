/*This program print string from different initial position*/
#include <stdio.h>

int main()
{
    char name[] = "Cprogram";
    printf("%s\n", name);               //prints "Cprogram"
    printf("%s\n", name + 1);           //prints "program"
    printf("%s\n", name + 2);           //prints "rogram"
    printf("%s\n", name + 3);           //prints "ogram"
}