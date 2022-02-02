/* Program to search the given name among the list of names of n students using pointer.*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i, num;
	printf("Enter the number of students: ");
	scanf("%d", &num);
    char word[50], name[num][50];

	fflush(stdin);
	for(i = 0; i < num; i++)
	{
		printf("Name of student %d: ", i + 1);
		gets(*(name + i));
	}
	
    printf("Enter the name to search: ");
    gets(word);
    for(i = 0; i < num; i++)
	{
		if(strcmp(word, *(name + i)) == 0)
		{
			printf("Found Student: %s", *(name + i));
			getchar();
			exit(0);
		}
	}
	printf("Student Not Found");
	getchar();
}