// Write a C++program that reads marks in five subjects and finds total marks, percentage.
#include <iostream>
using namespace std;

int main()
{
	double marks[5], total = 0, percent;
	int i;
	for(i = 0; i < 5; i++)
	{
		cout << "Enter marks in subject " << i + 1 << " : ";
		cin >> marks[i];
		total = total + marks[i];
	}
	percent = total / 5;
	cout << "Total marks: " << total << endl;
	cout << "Total percentage: " << percent << "%" << endl;
	return 0;
}