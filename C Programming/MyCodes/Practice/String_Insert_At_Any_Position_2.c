/*This program inserts extra string at specified position of string*/
#include <stdio.h>

int main()
{
    int i, j, k, position;
    char string[50], insert[50], combine[50];
    //Input String and Position
    printf("Enter first string: ");
    gets(string);
    printf("Enter string to be inserted: ");
    gets(insert);
    printf("Enter the position number to insert: ");
    scanf("%d", &position);
    //Fill Cells till position comes
    for(i = 0, k = 0; i < position; i++, k++)
    {
        combine[k] = string[i];
    }
    //Fill string to be inserted on arrived Position
    for(j = 0; insert[j] != '\0'; j++, k++)
    {
        combine[k] = insert[j];
    }
    //Fill remaining characters of 1st string on remaining cells
    for(j = 0; string[j] != '\0'; j++, k++, i++)
    {
        combine[k] = string[i];
    }
    combine[k] = '\0';              //Stringify

    puts(combine);
}