/* Program to calculate sum of N numbers using function call */
#include <iostream>
#include <vector>
using namespace std;

inline void sum(int &total, int num, vector<int> data)
{
	total = 0;
	for(int i = 0; i < num; i++)
	{
		total = total + data[i];
	}
}

int main()
{
	int accumulator = 0;
	const int Number = 40;
	vector<int> dataSet;
	for(int i = 0; i < Number; i++)
	{
		dataSet.insert((dataSet.begin() + i), i);
	}
	sum(accumulator, Number, dataSet);
	cout << "Sum is " << accumulator << endl;
}