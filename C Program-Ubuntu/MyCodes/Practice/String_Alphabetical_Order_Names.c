/*This program takes list of lowercased name from user, sorts them and display in alphabetical order.*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
// #define num 5                //Alternative

int main()
{
    int i, j, difference, num;
    char name[50][50];
    char temp[50];                  //1D Character Array(As String) 
    //Input Name Strings
    printf("Enter number of names: ");
    scanf("%d", &num);
    printf("Enter any %d names in lowercase:\n", num);
    for(i = 0; i < num; i++)
    {
        scanf("%s", name[i]);
        //NOTE:If we use gets(), then 'i <= num' in for loop. Since, gets() is unformatted function
    }
    //Compare and arrange using Bubble Sort
    for(i = 0; i < num - 1; i++)
    {
        for(j = 0; j < num - 1 - i; j++)
        {   //Compare string's ASCII size
            difference = strcmp(name[j+1], name[j]);
            if(difference < 0)
            {   //Swap strings if 'name[j + 1]' smaller than 'name[j]'
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }
    //Output in Alphabetical Order
    printf("The names in alphabetical order are:\n");
    for(i = 0; i < num; i++)
    {
        printf("%s\n", name[i]);
    }
    getchar();
}