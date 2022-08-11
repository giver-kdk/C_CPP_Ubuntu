/*This is a program which will read a line and delete from it all occurrences of the word “the”.*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int i, index, length;
    char word[50], string[100];
    printf("Write any sentence:\n");
    gets(string);
    printf("Enter the word to remove: ");
    gets(word);
    //Count the length of word
    length = strlen(word);
    //Loop until word is completely removed
    while(strstr(string, word) != NULL)
    {   //Find base index number of word to be removed
        index = strstr(string, word) - &string[0]; //Gives address block difference which is an integer
        
        for(i = index; string[i] != '\0'; i++)
        {   //Shift the string towards left by overwriting the word to be removed
            string[i] = string[i + length + 1];     //'1' is added to remove extra blank space
        }
    }
    puts(string);
}