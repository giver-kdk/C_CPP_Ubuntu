/*This program reverses the string without using strrev function*/
#include <stdio.h>
#include <string.h>

int main()
{
    char name[50], rname[50];
    int length, i, j;
    //Input String
    printf("Input name to be reversed: ");
    gets(name);
    
    length = strlen(name);    
    //Incremenet 'i' and decrement 'j'  
    for(i = 0, j = length - 1; i < length; i++, j--)
    {
        rname[i] = name[j];             //Assign last character to 1st place and so on
    }
    rname[i] = '\0';            //Convert to true string
    puts(rname);
}
//Without using string library:
// int main()
// {
//     int i, j, count = 0, temp;
//     char string[50];
//     //Input string
//     printf("Enter any string: ");
//     gets(string);
//     //Count the numbers of strings to reverse
//     for(i = 0; string[i] != '\0'; i++)       
//     {
//         count++;
//     }
//     //Reverse the strings using Bubble Swap
//     for(i = 0; string[i] != '\0'; i++)
//     {
//         for(j = 0; j < count - i - 1; j++)
//         {
//             temp = string[j];
//             string[j] = string[j + 1];
//             string[j + 1] = temp;
//         }
//     }
//     //Output String
//     printf("The reversed string is: %s", string);
// }