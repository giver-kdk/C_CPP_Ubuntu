/*This program counts the number of words in a sentence.*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    int i, word_count = 0;          
    char string[100];
    printf("Write a sentence:\n");
    gets(string);
    for(i = 0; string[i] != '\0'; i++)
    {
        if(string[i] == ' ')
        {
            word_count++;       //Count the word whenever space is encountered
        }
    }
    printf("Number of words: %d", word_count + 1);      //No. of word = No. of spaces + 1
}