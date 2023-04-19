/* This program checks if the entered IP Address is valid one or not by returning 1 or 0*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isValid(char string[]);
int main()
{
    char string[50];
    printf("Enter IP Address: ");
    scanf("%s", string);
    printf("%d", isValid(string));
}
int isValid(char string[])
{
    int i, j, k, l, length, a, result = 0;
    char string1[50], string2[50], string3[50], string4[50];
    length = strlen(string);
    for(i = 0; string[i] != '.'; i++)
    {
        string1[i] = string[i];
    }
    if(string1[0] == '0'){return 0;}
    string1[i] = '\0';
    a = strcmp(string1, "0");
    if(a < 0){return 0;}
    else{result++;}
    a = strcmp(string1, "255");
    if(a > 0){return 0;}
    else{result++;}
    
    
    for(i = i + 1, j = 0; string[i] != '.'; i++, j++)
    {
        string2[j] = string[i];
    }
    string2[j] = '\0';
    a = strcmp(string2, "0");
    if(a < 0){return 0;}
    else{result++;}
    a = strcmp(string2, "255");
    if(a > 0){return 0;}
    else{result++;}
    
    for(i = i + 1, j = 0; string[i] != '.'; i++, j++)
    {
        string3[j] = string[i];
    }
    string3[j] = '\0';
    a = strcmp(string3, "0");
    if(a < 0){return 0;}
    else{result++;}
    a = strcmp(string3, "255");
    if(a > 0){return 0;}
    else{result++;}
    
    for(i = i + 1, j = 0; string[i] != '\0'; i++, j++)
    {
        string4[j] = string[i];
    }
    string4[j] = '\0';
    a = strcmp(string4, "0");
    if(a < 0){return 0;}
    else{result++;}
    a = strcmp(string4, "255");
    if(a > 0){return 0;}
    else{result++;}
    if(result == 8)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

