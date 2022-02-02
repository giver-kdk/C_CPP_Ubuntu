#include <stdio.h>

int main()
{
	int indicator;
	char data;
	FILE *fp1 = fopen("lines.txt", "r");
	if(fp1 == NULL)
	{
		printf("lines.txt cannot be opened!");
	}
	FILE *fp2 = fopen("capitalized.txt", "w");
	if(fp2 == NULL)
	{
		printf("capitalized.txt cannot be created!");
	}
	data = fgetc(fp1);
	if(data >= 97 && data <= 122)
	{
		data = data -32;
	}
	fputc(data, fp2);
	indicator = 0;
	while((data = fgetc(fp1)) != EOF)
	{
		if(indicator == 1)
		{
			data = data -32;
		}
		if(data == '\n')
		{
			indicator = 1;
		}
		else
		{
			indicator = 0;
		}
		fputc(data, fp2);
	}
	fclose(fp1);
	fclose(fp2);
}