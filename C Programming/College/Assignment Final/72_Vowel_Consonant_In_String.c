/* Program to read a string and count the number of vowels and consonants in it.*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0, vowel = 0, cons = 0;
    char name[100];
    printf("Type your name: ");
    gets(name);
    while(name[i] != '\0')
    {
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || 
           name[i] == 'o' || name[i] == 'u')
        {
            vowel++;
        }
		else
		{
			cons++;
		}
        i++;
    }
    printf("Your name has %d vowel characters.\n", vowel);
    printf("Your name has %d consonant characters.", cons);
    getchar();
}