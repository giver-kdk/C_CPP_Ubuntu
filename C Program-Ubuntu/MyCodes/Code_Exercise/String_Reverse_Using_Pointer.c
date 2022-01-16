/*This program reverses string using a function with pointer arithmetic*/
#include <stdio.h>

char reverse(char str[100]);
int main()
{
    char string[100] = "Giver Khadka";
    printf("String is:\t%s\n", string);

    reverse(string);
    printf("Reversed String is:\t%s", string);
}
char reverse(char str[100])
{
    int i , j, length;
    char temp[100];
    for(i = 0; str[i] != '\0'; i++)
    {
        *(temp + i) = *(str + i);           //Store string charcaters to temporary array
    }
    length = i + 1;                         //Use incremented 'i' for finding length
    for(i = 0, j = length - 1; i < length; i++, j--)
    {
        *(str + i) = *(temp + j);           //Assign reverse elements of temporary array to normal string
    }
}