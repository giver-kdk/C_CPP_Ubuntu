/*This program prints any string into its Lower and Uppcase format*/
#include <stdio.h>
#include <string.h>

int main()
{
    char string[50];
    //Input String
    printf("Enter any string: ");
    gets(string);
    //Lowercase the string
    strlwr(string);                          //NOTE: Actual string is converted into Lowercase form
    printf("\nLower Case is : %s\n", string);
    //Uppercase the string
    strupr(string);
    printf("Upper Case is: %s", string);

}