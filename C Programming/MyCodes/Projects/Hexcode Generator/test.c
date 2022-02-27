#include <stdio.h>

int main()
{
	char ch;
	FILE *fp = fopen("Transfer.txt", "r");
	ch = fgetc(fp);
	printf("%c", ch);
	ch = fgetc(fp);
	printf("%c", ch);
	ch = fgetc(fp);
	printf("%c", ch);
	ch = fgetc(fp);
	printf("%c", ch);
	fclose(fp);
}