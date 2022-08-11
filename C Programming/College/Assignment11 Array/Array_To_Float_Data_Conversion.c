/*This program converts number charcater array into actual float number using atof function.*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    char string[]="-123.45E10LOK";
    float real;
    //atof returns 0 if character is not recognized
    real=atof(string);             //Function stops when non-numerical character is detected after first numerical character
    printf("String=%s Float=%f", string, real);
}
