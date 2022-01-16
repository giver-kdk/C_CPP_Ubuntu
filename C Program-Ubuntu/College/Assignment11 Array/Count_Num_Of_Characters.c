/*This program takes user input and counts number of vowel, semicolon, comma, space and consonant*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
    char s[80];
    int len, i, space = 0, vowel = 0, consonant = 0, semicolon = 0, comma = 0;
    printf("Enter string:\t");
    gets(s);
    len = strlen(s);
    for(i = 0; i < len; i++)
    {
        if(s[i] == 'a'||s[i] == 'e'||s[i ] == 'i'||s[i] == 'o'||s[i] == 'u')
            vowel++;
        else if(s[i] == ';')
            semicolon++;
        else if(s[i] == ',')
            comma++;
        else if(s[i] == ' ')
            space++;
        else if(s[i] > 97 && s[i] <= 122)        //Remaining alphabets are consonants if not vowel
            consonant++;
    }
    printf("\nThe number of vowel(s):%d", vowel);
    printf("\nThe number of semicolon(s):%d", semicolon);
    printf("\nThe number of comma(s):%d", comma);
    printf("\nThe number of space(s):%d", space);
    printf("\nThe number of consonant(s):%d", consonant);
    getchar();
}
