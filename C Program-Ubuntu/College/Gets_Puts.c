#include <stdio.h>
#include <conio.h>
void main()
{
    char ch1[10], ch2[10];
    printf("Enter your name");
    gets(ch1);               //holds complier until user inputs strings. This can read strings including whitespace
    printf("Your name is ");
    puts(ch1);               //displays the string on the output
}
