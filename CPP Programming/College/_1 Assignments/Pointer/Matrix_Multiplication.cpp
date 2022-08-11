// Program to calculate product of two 3 by 3 matrices using pointer
#include<iostream>
using namespace std;

int main()
{
	int i, j, k, num;
	int matrix1[3][3], matrix2[3][3], product[3][3];

	cout << "Enter elements of first 3 by 3 matrix: " << endl;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			cin >> *(*(matrix1 + i) + j);			// Equivalent to cin >> matrix1[i][j];
		}
	}
	cout << "Enter elements of second 3 by 3 matrix: " << endl;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			cin >> *(*(matrix2 + i) + j);
		}
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			*(*(product + i) + j) = 0;
			for(k = 0; k < 3; k++)
			{
				*(*(product + i) + j) += (*(*(matrix1 + i) + k)) * (*(*(matrix2 + k) + j));
			}
		}
	}
	cout << "Multiplication of two 3 by 3 matrix: " << endl;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			cout << *(*(product + i) + j) << "\t";
		}
		cout << endl;
	}
	return 0;
}