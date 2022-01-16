/*This program compares the ASCII value of 1st two unmatched string characters and shows the difference.
--------Code by Giver Khadka---------*/
#include <stdio.h>

int main()
{
    int i, j = 0, difference = 0;           //'j' declraed to exit loop when required
    char string1[50] = "Hello";
    char string2[50] = "Helle";
    //Set condition to iterate if atleast one of the character is not null and j = 0
    for(i = 0; (string1[i] != '\0' || string2[i] != '\0') && j == 0; i++)
    {
        if(string1[i] != string2[i])
        {
            difference = string1[i] - string2[i];         //Calculates ASCII difference when strings unmatched
            j = 1;                                      //After, 1st unmatched strings. Loop should exit
        }
    }
    printf("\nASCII value difference is: %d", difference);
}