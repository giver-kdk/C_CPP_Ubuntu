#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char *name;
    int i;
    name=(char *)malloc(4);

    strcpy(name, "BIM");
    printf("Name=%s", name);
    printf("\n String character \t\t Address");
    for(i=0;i<4;i++)
        printf("\n\t%c \t\t\t %u",*(name+i),name+i);
    name=(char *)malloc(35);
    strcpy(name, "Bachelor in Information Management");
    printf("\n\n Name=%s", name);
    printf("\n String character \t\t Address");
    for(i=0;i<35;i++)
        printf("\n\t%c \t\t\t %u",*(name+i),name+i);
    getchar();
}
