#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;
void strupr(string str)
{
	for_each(str.begin(), str.end(), [](char & ch) 
	{
        ch = ::toupper(ch);
    });
}
void strlwr(string str)
{
	for_each(str.begin(), str.end(), [](char & ch) 
	{
        ch = ::tolower(ch);
    });
}

int main()
{
	int row = 2;
	int column = 3;
	string opCodeArray[row][column]
	{
		{"Ram", "Shyam", "Hari"},
		{"Sita", "Gita", "Rita"}
	};
	// string name[2][3];
	// char name[2][3][10];
	// for(int i = 0; i < 2; i++)
	// {
	// 	for(int j = 0; j < 3; j++)
	// 	{
	// 		cout << "Enter name " << i << j << ": ";
	// 		cin >> opCodeArray[i][j]; 
	// 		cin.ignore();				// Similar to 'fflush(stdin)' in C	
	// 	}
	// }
	// strupr(name[0][0]);
	cout << "Names are: " << endl;
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < column; j++)
		{
			cout << opCodeArray[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}