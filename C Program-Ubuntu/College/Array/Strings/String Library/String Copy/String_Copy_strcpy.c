/*This program copies one string to another using strcpy function*/
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[50];
    char string2[50] = "Hello World";

    strcpy(string1, string2);       //string2's all characters assigned to string1
    printf("%s", string1);          
}
