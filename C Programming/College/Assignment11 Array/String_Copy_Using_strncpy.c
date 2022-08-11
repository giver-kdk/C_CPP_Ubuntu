/*This program copies specific numbers of left most string character to destination string*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char target_str[25], source_str[30];
    int n;
    printf("\nInput string:\t");
    gets(source_str);
    printf("\nHow many characters to copy:");
    scanf("%d", &n);
    //strncpy has 3 parameters
    strncpy(target_str, source_str, n);
    target_str[n]='\0';     //Stringify
    puts(target_str);
    getchar();
}
