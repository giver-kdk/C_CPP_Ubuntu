#include <stdio.h>	// Contains gets() and other functions

int main()

{
	int i;
	char string[20];
	printf("Hello World");

	getchar(); // Alternative to getch()

	system("clear"); // Alternatve to system("cls") and clscr()

	printf("Enter a string: ");

	gets(string); // gets() works fine. It is defined in stdio.h

	printf("%s", string);
	// NOTE: To use pow(number, power); function. Code in C++.
}
