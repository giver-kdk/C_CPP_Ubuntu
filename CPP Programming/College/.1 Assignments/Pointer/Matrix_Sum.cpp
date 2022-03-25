// Program to calculate sum of two 3 by 3 matrices using pointer
#include<iostream>
using namespace std;

int main()
{
	int i, j, num;
	int matrix1[3][3], matrix2[3][3], sum[3][3];

	cout << "Enter elements of first 3 by 3 matrix: " << endl;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			cin >> *(*(matrix1 + i) + j);			// Equivalent to cin >> matrix1[i][j]
			// cin >> num;							// Alternative input method
			// *(*(matrix1 + i) + j) = num;
		}
	}
	cout << "Enter elements of second 3 by 3 matrix: " << endl;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			
			// cin >> *(*(matrix1 + i) + j);
			cin >> num;
			*(*(matrix2 + i) + j) = num;
		}
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			// sum[i][j] = matrix1[i][j] + matrix2[i][j]
			*(*(sum + i) + j) = *(*(matrix1 + i) + j) + *(*(matrix2 + i) + j);
		}
	}
	cout << "Sum of two 3 by 3 matrix: " << endl;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			cout << *(*(sum + i) + j) << "\t";
		}
		cout << endl;
	}
	return 0;
}