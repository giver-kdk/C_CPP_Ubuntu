/*Program to convert lowercase letter into uppercase using call by reference*/ 
#include <stdio.h>
#include <conio.h>

void lowerTOupper(char *);
void main()
{
    char lower;
    printf("Input lower-case character:\t");
    scanf("%c", &lower);
    lowerTOupper(&lower);
    printf("\nThe equivalent upper-case character is:%c", lower);
    getchar();
}
void lowerTOupper(char *c)
{
    if(*c>=97 && *c<=122)
        *c=*c-32;
}