#include <stdio.h>

int main()
{
	char data;
	FILE *fp1 = fopen("input.txt", "r");
	FILE *fp2 = fopen("output.txt", "w");
	while((data = fgetc(fp1)) != EOF)
	{
		fputc(data, fp2);
	}
	fclose(fp1);
	fclose(fp2);
}