#include <stdio.h>
#include "My_Function.c"            //Imports file

int main()
{
    int a, b, addition, subtraction;
    addition= do_addition(a, b);
    printf("\nThe sum is %d", addition);

    subtraction= do_subtraction(a, b);
    printf("\nThe difference is %d", subtraction);
}