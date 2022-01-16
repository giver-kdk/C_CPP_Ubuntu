/*This program reads a text file, creates another text file deleting the following words “three”, “bad”, and “time”.*/
/*NOTE: fscanf is not ideal for reading new line character*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	FILE *fp,*fpp;
	char string[300];
	fp=fopen("test.txt","r");
	if(fp==NULL)
	{
		printf("Cannot open file");
		exit(1);
	}
	fpp=fopen("hello.txt","w");
	if(fpp==NULL)
	{
		printf("Cannot create file");
		exit(1);
	}
	while((fscanf(fp,"%s",&string))!=EOF)
	{
		if((strcmp(string,"three")!=0)&&(strcmp(string,"bad")!=0)&&(strcmp(string,"time")!=0))
		{
			fprintf(fpp,"%s ",string);
		}
	}
	fclose(fp);
	fclose(fpp);
}
