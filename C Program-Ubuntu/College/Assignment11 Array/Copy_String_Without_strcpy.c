#include <stdio.h>
#include <conio.h>
void main()
{
    char copy[50], paste[50];
    int i;
    printf("\nEnter your name (to copy):\t");
    gets(copy);
    for(i=0;copy[i]!='\0';i++)
    {
        paste[i]=copy[i];
    }
    paste[i]='\0';
    printf("\nThe name is (pasted as):\t");
    puts(paste);
    getchar();
}
