/*This program sorts the given list of strings: jump, walk, red, green, talk, move, look, feel*/
#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, number;
    char temp[10][50], string[][50] = {"jump", "walk", "red", "green", "talk", "move", "look", "feel"};
    number = sizeof(string) / sizeof(string[0]);

    for(i = number; i > 0; i--)     //Decrementing 'i' limits the number of increment of 'j'
    {
        for(j = 0; j < i; j++)
        {
            if(strcmp(string[j], string[j + 1]) > 0)        //if string[j] > string[j + 1]
            {   //Swap string[j] with string[j + 1]
                strcpy(temp[0], string[j]);
                strcpy(string[j], string[j + 1]);
                strcpy(string[j + 1], temp[0]);
            }
        }
    }
    for(i = 0; i < number; i++)
    {
        printf("%s\n", string[i]);  //Prints string of ith row
    }
}