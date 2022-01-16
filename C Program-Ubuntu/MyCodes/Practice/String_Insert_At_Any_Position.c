/*This program inserts given string B at a specified position of another given string A.
Then displays the resulting string.*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, position, temp1, temp2;
    char stringA[50], stringB[50], combine[50];
    //Input Strings
    printf("Enter first string: ");
    gets(stringA);                
    printf("Enter second string to be inserted: ");
    gets(stringB);
    //Input Positional Value
    printf("Enter the position number to insert 2nd string: ");
    scanf("%d", &position);
    temp1 = position;                   //Store Initial Position
    //Fill required 2nd string on required position(i.e; [temp1 ,temp2])
    for(i = 0; stringB[i] != '\0'; i++)
    {
        combine[position] = stringB[i];
        position++;
    }
    temp2 = position - 1;               //Store Actual Final Position
    //Fill 1st string on empty cells only by skipping 2nd String positions
    for(i = 0, j = 0; stringA[j] != '\0'; i++, j++)
    {
        if(i >= temp1 && i <= temp2)        //If 'i' belongs to interval [temp1, temp2]
        {   //Decrement 'j' to keep its value constant at next iteration(j++)
            j--;                           //So, stringA[j] is on hold for next position
        }
        else
        {
            combine[i] = stringA[j];        //Only fill on empty cells of 'combine'
        }
    }
    combine[i] = '\0';                      //Stringify

    printf("The combined inserted string is: %s", combine);
}