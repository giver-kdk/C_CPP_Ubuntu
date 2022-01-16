/* Program to read name list of 50 students and display them in alphabetical form.*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
#define NUM 50

int main()
{
	int i, j;
	char name[50][50], temp[50];
	printf("Enter any %d student names:\n", NUM);

	for(i = 0; i < NUM; i++)
	{
		gets(name[i]);
	}
	for(i = NUM; i >= 0; i--)     
    {
        for(j = 0; j < i; j++)
        {
            if(strcmp(name[j], name[j + 1]) > 0)        //if name[j] > name[j + 1]
            {   
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }
	printf("The name is alphabetical order:\n");
	for(i = 0; i < NUM; i++)
	{
		puts(name[i]);
		printf("\n");
	}
	getchar();
}