/*This program compares the ASCII value of 1st two unmatched string characters and shows the difference.*/
#include <stdio.h>

int main()
{
    char string1[50] = "Good Boy";
    char string2[50] = "Good";
    int i = 0;
    //Set condition to loop until strings are equal and both reach null character
    while(string1[i] == string2[i] && string1[i] != '\0' && string2[i] != '\0')
    {
        i++;
    }
    //Final value of 'i' used to compare strings
    if(string1[i] == '\0' && string2[i] == '\0')
    {   //Strings are equal of both have reached null character simultaneously
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }

}