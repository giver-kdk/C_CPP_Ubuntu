#include <stdio.h>
#include <string.h>

int main()
{
	char string[] = "With great power comes great responsibility";
	char *ptr;
	//Here, 'string' is the main string and " " is the delimiter(The string is broken when its detected)
	ptr = strtok(string, " ");
	//'strtok' return NULL when end of string reached
	while(ptr != NULL)
	{
		printf("%s\n", ptr);				//'strtok' returns the first splitted string to 'ptr'
		//Instead of putting 'string', 'NULL' indicates to point on next occurence of previous string
		ptr = strtok(NULL, " ");		//Now, 'ptr' points to next splitted strings part
	}
}