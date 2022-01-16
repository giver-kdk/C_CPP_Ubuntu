#include <stdio.h>

int main()
{
	char data;
	FILE *fp = fopen("Hello.txt", "r");
	if((data = getc(fp)) == EOF)
	{
		printf("File is Empty");
	}
	else
	{
		printf("File has some content");
	}
}