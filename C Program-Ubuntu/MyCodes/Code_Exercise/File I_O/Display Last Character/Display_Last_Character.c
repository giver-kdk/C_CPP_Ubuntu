#include <stdio.h>

int main()
{
	int indicator;
	char data;
	FILE *fp1 = fopen("paragraph.txt", "r");
	if(fp1 == NULL)
	{
		printf("paragraph.txt cannot be opened!");
	}
	data = fgetc(fp1);
	indicator = 0;
	printf("Reading Data...\n");
	while((data = fgetc(fp1)) != EOF);			// while loop works with ';' if no scope used
	// Offset the cursor one step back (-1)
	fseek(fp1, -1, SEEK_CUR);					// SEEK_CUR = 1 which means current position
	data = fgetc(fp1);
	printf("Last character is: %c", data);
	fclose(fp1);
}