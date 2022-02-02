/*This program takes array string as input and print those strings.
NOTE: During input and output, only row size should be written.Since, column size is fixed during declaration.*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    char array_string[5][50];
    //Input Array of Strings 
    printf("Enter 5 names: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%s", array_string[i]);       //'i' only mentioned as row
    }
    //Output Array of Strings
    printf("You entered: ");
    for(i = 0; i < 5; i++)
    {
        printf("%s\t", array_string[i]);
    }

}