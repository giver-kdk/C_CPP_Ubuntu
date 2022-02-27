#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char mvi[10] = "MVI";
	char sta[10] = "STA";
	char lda[10] = "LDA";
	char file_name[50], syntax[10] = "\0";
	char data = 's';
	printf("Enter assembly file name: ");
	gets(file_name);

	FILE *fp = fopen("Transfer.txt", "r");
	if(fp == NULL)
	{
		printf("Error Opening File\n");
		exit(0);
	}
	int i = 0;
	while((data = getc(fp)) != EOF)
	{
		
		if((data == ' ') || (data == ',') || (data == '\n') || (data == '\t'))
		{
			syntax[i] = '\0';
			i = 0;
			printf("Syntax: %s\n", syntax);
			// Program Logic
			strcpy(syntax, "\0");
		}
		else
		{
			syntax[i] = data;
			i++;
		}
		printf("Data: %c\n", data);
	}
	fclose(fp);
}