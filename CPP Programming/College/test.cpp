#include <iostream>
#include <string.h>
namespace giver
{
	void cout(char s[20])
	{
		printf("%s\n", s);
	}
}
// using namespace giver;

int main()
{
	char string[20] = "Hello World\n";
	giver::cout(string);
	return 0;
}