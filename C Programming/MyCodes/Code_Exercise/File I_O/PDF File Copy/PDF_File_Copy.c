#include <stdio.h>

int main()
{
	char data;
	FILE *fp1 = fopen("report.pdf", "rb");
	if(fp1 == NULL)
	{
		printf("report.pdf cannot be opened!");
	}
	FILE *fp2 = fopen("report_copy.pdf", "wb");
	if(fp2 == NULL)
	{
		printf("report_copy.pdf cannot be created!");
	}
	while((data = fgetc(fp1)) != EOF)
	{
		fputc(data, fp2);
	}
	fclose(fp1);
	fclose(fp2);
}