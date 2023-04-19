/*This program converts number charcater array into actual integer number using atoi function.*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    char string[]="-123.45";
    int integer;
    //atoi returns 0 if character is not recognized
    integer=atoi(string);       //Function stops when non-numerical character is detected after first numerical character
    printf("String=%s Integer=%d", string, integer);
}
