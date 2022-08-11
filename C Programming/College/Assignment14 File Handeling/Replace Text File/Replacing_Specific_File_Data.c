/*This program creates text file replacing the following words from another text fiel: 
“Ram” to “Hari”, “Sita” to “Gita”, and “Govinda” to “Shiva”.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[50], str2[50], string[20][20];
    int i, j, k = 0;
    //Read Mode to store data in string
    FILE *fp = fopen("File1.txt", "r");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fgets(str1, 30, fp);
    //Store strings separated by whitespace separately
    for(i = 0 ; i < 3; i++)
    {   //Condition: Until whitespace or null character is found
        for(j = 0; (str1[k] != ' ') && (str1[k] != '\0'); j++, k++)
        {   //'k' variable increments 'str' continuously
            string[i][j] = str1[k];                              
        }
        string[i][j] = '\0';                                    //Stringify
        j++;
        k++;                                                    //Next Position
    }
    fclose(fp);
    //Write Mode to clear previous file data
    fp = fopen("File2.txt", "w");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fclose(fp);
    //Append Mode to add new data in file
    fp = fopen("File2.txt", "a");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    for(i = 0; i < 3; i++)
    {   //Put corresponding names in order
        if(strcmp(string[i], "Ram") == 0)
        {
            fputs("Hari ", fp);
        }
        else if(strcmp(string[i], "Sita") == 0)
        {
            fputs("Gita ", fp);
        }
        else if(strcmp(string[i], "Govinda") == 0)
        {
            fputs("Shiva ", fp);
        }
    }
    fclose(fp);
    //Read Mode to display file data
    fp = fopen("File2.txt", "r");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }
    fgets(str2, 30, fp);
    printf("Information in File 1: %s\n", str1);
    printf("Information in File 2: %s\n", str2);
    fclose(fp);
}