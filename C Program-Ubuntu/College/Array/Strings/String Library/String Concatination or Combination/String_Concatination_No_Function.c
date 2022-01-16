/*This program concatinates/combines strings without using strcat function*/
#include <stdio.h>

int main()
{
    int i, j;
    char string1[50] = "Hello";
    char string2[50] = "World";
    char combined[50];              //Stores combined strings
    //Store 1st string
    for(i = 0; string1[i] != '\0'; i++)
    {
        combined[i] = string1[i];
    }
    //Manually insert whitspace in the end of 1st string
    combined[i] = ' ';              //Value of 'i' is still useful
    //Sequencially store 2nd string 
    for(j = 0; string2[j] != '\0'; j++)
    {
        combined[i + j + 1] = string2[j];   //'i + j + 1' prevents overwrite of 'World' upon 'Hello'
    }
    combined[i + j + 1] = '\0';         //Manually end with null character to make actual string
    printf("%s", combined);
}