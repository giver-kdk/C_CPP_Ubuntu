#include <stdio.h>
#include <stdio_ext.h>

int main()
{
	char string[20];
	printf("Enter any sentence: ");
	// NOTE: There are two '_' before fpurge.
	__fpurge(stdin);								// Alternative of fflush(stdin);
	gets(string);
	printf("Sentence is: %s", string);
	printf("\n");
}