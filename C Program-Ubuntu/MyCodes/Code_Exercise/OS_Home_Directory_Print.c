#include <stdio.h>

int main()
{
	char name[20];
	printf("Enter your Username: ");
	scanf("%s", name);
	// #ifdef is used to check if the Macro is defined or not
	#ifdef _WIN32														// _WIN32 is only defined on 32-bit windows OS
		printf("Home Directory: C:\\Users\\%s", name);
	#endif
	#ifdef _WIN64														// _WIN63 is only defined on 64-bit windows OS
		printf("Home Directory: C:\\Users\\%s", name);
	#endif
	#ifdef __Apple__													// __Apple__ is only defined on MAC OS
		printf("Home Directory: /Users/%s", name);
	#endif
	#ifdef __linux__													// __linux__ is only defined on Linux OS
		printf("Home Directory: /home/%s", name);
	#endif
}