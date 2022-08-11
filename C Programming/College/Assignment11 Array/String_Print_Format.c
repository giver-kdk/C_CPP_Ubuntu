/*This program prints string in required format*/
#include <stdio.h>
#include <conio.h>
void main()
{
char name[19]="Lok Prakash Pandey";
printf("%19s\n", name);              
printf("%10s\n", name);             //Allocates 10 character space and prints all characters
printf("%19.11s\n", name);          //Allocates 19 character space and only prints 11 characters(Right Aligned)
printf("%19.0s\n", name);
printf("%-19.11s\n", name);         //Allocates 19 character space and only prints 11 characters(Left Aligned)
printf("%.3s\n", name);
printf("%s\n", name);
getchar();
}