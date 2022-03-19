#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	DWORD dwSize = MAX_PATH;
	char szLogicalDrives[MAX_PATH] = {0};
	DWORD dwResult = GetLogicalDriveStrings(dwSize, szLogicalDrives);

	if (dwResult > 0 && dwResult <= MAX_PATH)
	{
		char *szSingleDrive = szLogicalDrives;
		while (*szSingleDrive)
		{
			string letter = szSingleDrive;
			letter.pop_back();
			cout << letter << endl;

			// get the next drive
			szSingleDrive += strlen(szSingleDrive) + 1;
		}
	}
	return 0;
}