/*This is a program to count the number of occurrences of any two vowels in succession in a line of text. 
Eg:
“Please allow a studious girl to read behavioral science”
Such occurrences are ea, io, ou, ie.
Observe that in a word such as studious we have counted “io” and “ou” as two separate occurrences of two consecutive vowels.*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int i, count = 0;
    char string[100], vowel[] = "aeiou";
    printf("Write any sentence: ");
    gets(string);
    
    for(i = 0; string[i] != '\0'; i++)
    {   //Check character to be vowel or not
        if(strchr(vowel, string[i]) != NULL)
        {   //'vowel' string contains '\0' as well
            if(string[i + 1] != '\0')       //Avoids '\0' as consecutive character
            {   //Check consecutive character to be vowel or not
                if(strchr(vowel, string[i + 1]) != NULL)
                {
                    count++;       
                }
            }
        }
    }
    printf("Number of two successive vowels: %d", count);
}