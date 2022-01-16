/*Program having a function that takes an array of character pointer(equivalently, an array of strings) as a parameter and 
then print the length of each string in that array. Use pointers arithmetics instead of array subscripting wherever possible.*/
#include <stdio.h>

char print_length(char *str);
int main()
{
    int i, j, length[100];
    char string[][100] = 
    {
        "Hello",
        "Giver Khadka",
        "Politics",
        "Environment",
        "Energy"
    };
    for( i = 0; i < sizeof(string[0]) / sizeof(string); i++)
    {
        for(j = 0; string[i][j] != '\0'; j++)
        {
            
        }
    }
}