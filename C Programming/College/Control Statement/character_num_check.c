#include <stdio.h>
#include <conio.h>

void main()
{
    char ch1;
    printf("Enter any character: ");
    scanf(" %c", &ch1);
    if(ch1>=65 && ch1<=90)
    {
        printf("Upper Character");
    }
    else if(ch1>=97 && ch1<=122)
    {
        printf("Lower Character");
    }
    else if(ch1>=48 && ch1<=57)
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
    getchar();
}