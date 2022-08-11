// Program to write file in C++ using standard C file handling 
#include <iostream>
using namespace std;

int main()
{
	FILE *fp = fopen("File1.txt", "w");
	char name[20];
	cout << "Enter your name: ";
	cin.getline(name, 20);
	fputs(name, fp);
	cout << "Your name has been stored in the file" << endl;
	getchar();
	return 0;
}