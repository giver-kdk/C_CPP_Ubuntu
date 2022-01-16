/*This program prints the string character by character using while and for loop*/
#include <stdio.h>

int main()
{
    char college[] = "Nagarjuna College of IT";
    int i = 0;
    //while loop print
    while(college[i] != '\0')
    {
        printf(" %c", college[i]);
        i++;
    }
    printf("\n");
    //for loop print
    for(i = 0; college[i] != '\0'; i++)
    {
        printf(" %c", college[i]);
    }
}