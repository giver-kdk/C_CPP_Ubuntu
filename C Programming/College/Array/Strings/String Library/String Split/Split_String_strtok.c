#include <stdio.h>
#include <string.h>

int main()
{
	char string[] = "With great power comes great responsibility";
	char *ptr;
	//'strtok' means string token function that splits string into pieces.
	//Here, 'string' is the main string and " " is the delimiter(The string is broken when its detected)
	ptr = strtok(string, " ");
	//Char pointer is simply string
	printf("%s", ptr);				//'strtok' returns the first splitted string to 'ptr'
}