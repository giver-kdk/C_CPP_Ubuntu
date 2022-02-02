/* Write a program to read a line of text and delete all the vowels from it.*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    int i = 0, j = 0, vowel = 0, cons = 0;
    char text[100], temp[100];
    printf("Type your text: ");
    gets(text);
    while(text[i] != '\0')
    {
        if(text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && 
           text[i] != 'o' && text[i] != 'u')
        {
            temp[j] = text[i];									// Only assign consonant
			j++;
        }

        i++;
    }
	temp[j] = '\0';
	strcpy(text, temp);
    printf("Text Without Vowel is: %s", text);
    getchar();
}