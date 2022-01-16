/*This program copies one string to another without using strcpy function*/
#include <stdio.h>

int main()
{
    int i;
    char string1[50];
    char string2[50];
    //String input
    printf("Enter any statement: ");
    gets(string1);
    //Loop until null character is found
    for(i = 0; string1[i] != '\0'; i++)
    {
        string2[i] = string1[i];        //Assign source string to destination string
    }
    string2[i] = '\0';                  //Assign null character to make actual string
    printf("Copied string is: %s", string2);
}