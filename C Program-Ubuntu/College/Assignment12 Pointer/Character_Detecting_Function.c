/*This program uses a function that accepts a string and a character. 
The function looks for the first occurrence of the character in the string and returns a pointer to that location.*/
#include <stdio.h>
#include <conio.h>

char* fun(char [],char *);
void main()
{
    char string[20],character;
    char *pointer;
    printf("\n Enter string:");
    gets(string);
    printf("\n Enter character:");
    scanf("%c", &character);
    pointer=fun(string, &character);
    printf("\n Character=%c Address=%u",*pointer, pointer);
    getchar();
}
char *fun(char str[],char *c)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==*c)        //if(*(str+i)==*c)
        {
            printf("\n Character found");
            break;
        }
    }
    return &str[i];  //return (str+i);
}
