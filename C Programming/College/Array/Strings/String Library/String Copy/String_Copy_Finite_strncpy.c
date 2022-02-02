/*This program copies specific number of string characters using strncpy function*/
#include <stdio.h>
#include <string.h>

int main()
{
    int n = 2;
    char string1[50];
    char string2[50];
    //Input String
    printf("Enter any string: ");
    gets(string2);
    //Copy 'n' number of strings
    strncpy(string1, string2, n);    //NOTE: strncopy is used (not strcpy)
    string1[n] = '\0';              //Convert to True String
    //Output
    printf("%s", string1);
}