/* This program takes character array input and a word input to see if the entered word in found in the 
character array either vertically or horizontally*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i, j, row, col, count = 0;
	printf("Enter row and column: ");
    scanf("%d%d", &row, &col);
    char array[row][col + 1], word[20], verticalString[20];			// Extra column to store '\0'
	printf("Enter characters for Matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf(" %c", &array[i][j]);
        }
		array[i][j] = '\0';											// Stringify
    }
	printf("Enter the word to search in Matrix: ");
    scanf("%s", word);
	// Horizontal search for word
    for(i = 0; i < row; i++)
	{
		if(strstr(array[i], word) != NULL)							
		{	// Count if substring found
			count++;		
		}
	}
	// Vertical search for word
	for(i = 0; i < col; i++)
	{
		for(j = 0; j < row; j++)
		{
			verticalString[j] = array[j][i];
		}
		verticalString[j] = '\0';									// Stringify
		if(strstr(verticalString, word) != NULL)
		{
			count++;
		}
	}
	printf("Total number of matched words are: %d", count);
    return 0;
}
