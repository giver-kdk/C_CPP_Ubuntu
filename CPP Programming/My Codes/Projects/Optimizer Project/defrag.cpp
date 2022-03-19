#include <iostream>
using namespace std;

int main()
{
	cout << "Defrag Started!" << endl;
	system("C:\\Windows\\System32\\defrag C:");
	cout << "Defrag Ended!" << endl;
	return 0;
}