/*
How to use this program ?

- Copy the original raw text content in input_file.txt
- Run the code
- Check filtered output in output_file.txt

*/

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <algorithm>
using namespace std;

bool is_number(char data)
{
	if(data >= '0' && data <= '9'){return true;}
	else{return false;}
}
int main()
{
	bool foundNumber = false, foundAlpha = true, check;
	string line_string, number, alphabet;
	fstream file1, file2;
	file1.open("input_file.txt", ios::in);
	if(!file1)
	{
		cout << "Error Opening Input File!!!" << endl;
		file1.open("input_file.txt", ios::out);
		file1.close();
		exit(0);
	}
	file2.open("output_file.txt", ios::out);
	file2.close();
	file2.open("output_file.txt", ios::app);

	while(!file1.eof())
	{
		foundNumber = false;
		getline(file1, line_string);

		line_string.erase(0, line_string.find_first_of(' '));
		line_string.erase(remove(line_string.begin(), line_string.end(), ','), line_string.end());
		line_string.erase(remove(line_string.begin(), line_string.end(), '\''), line_string.end());
		cout << line_string << endl;

		for(int i = 0; i < line_string.length(); i++)
		{
			if((line_string[i] == '9') && (line_string[i + 1] == '8'))
			{foundNumber = true;}

			if(is_number(line_string[i - 1]) && line_string[i] == ' ' && line_string[i + 1] == '9' && line_string[i + 2] == '8')
			{number.push_back('\t');}

			if(foundNumber && is_number(line_string[i]))
			{number.push_back(line_string[i]);}
			else
			{alphabet.push_back(line_string[i]);}
		}
		file2 << number << "\t\t" << alphabet << endl;
		number.clear();
		alphabet.clear();
	}
	file1.close();
	file2.close();
	return 0;
}