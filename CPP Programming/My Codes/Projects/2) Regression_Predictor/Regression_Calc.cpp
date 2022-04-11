// Program to estimate output value by analyzing the input and output data collection
// Or, program to calculate regression model equation
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void regression_maths(int num, double EX, double EY, double EXY, double EX2, double EY2, double a, double b, double E[5][50]);

int main()
{
	int observeNum;
	char status = 'Y';							// Choice variable
	double input, output, interceptA, slopeB;
	cout << "Enter the number of pair of observation: ";
	cin >> observeNum;
	// Declare data set
	double dependant[observeNum], independant[observeNum];
	double product[observeNum], inputSquare[observeNum], outputSquare[observeNum];
	// Declare summations
	double inputSum = 0, outputSum = 0, productSum = 0, inSquareSum = 0, outSquareSum = 0;
	cout << "Enter any " << observeNum << " independant input data(X):" << endl;
	for(int i = 0; i < observeNum; i++)
	{
		cin >> independant[i];
		// Data storing and real time sum calculation
		inputSum = inputSum + independant[i];

		inputSquare[i] = independant[i] * independant[i];
		inSquareSum = inSquareSum + inputSquare[i];
	}
	cout << "Enter any " << observeNum << " dependant output data(Y):" << endl;
	for(int i = 0; i < observeNum; i++)
	{
		cin >> dependant[i];
		// Data storing and real time sum calculation
		outputSum = outputSum + dependant[i];

		product[i] = independant[i] * dependant[i];
		productSum = productSum + product[i];

		outputSquare[i] = dependant[i] * dependant[i];
		outSquareSum = outSquareSum + outputSquare[i];
	}
	// Formula for slope and intercept is derived from least square method on regression model
	slopeB = ((observeNum * productSum) - (inputSum * outputSum)) / ((observeNum * inSquareSum) - (inputSum * inputSum));
	interceptA = (outputSum - (slopeB * inputSum)) / observeNum;

	cout << "******************Data has been analyzed******************" << endl;
	while((status != 'N') && (status != 'n'))
	{
		cout << "Enter an input(X) value to predict output: ";
		cin >> input;
		// y = m.x + c
		output = (slopeB * input) + interceptA;
		cout << "The estimated output(Y) is: " << output << endl;
		cout << "Do you want to predict more? (y/n): ";
		cin >> status;
	}
	cout << "Display all Co-efficient & error Calculations? (y/n): ";
	cin >> status;
	if((status == 'Y') || (status == 'y'))
	{
		double dataSet[5][50];
		// Store all 1D data collections in a 2D array to transfer data into other function at once
		for(int i = 0; i < 5; i++)
		{
			for(int j = 0; j < observeNum; j++)
			{
				if(i == 0)		{dataSet[i][j] = independant[j];}				// Set of X
				else if(i == 1)	{dataSet[i][j] = dependant[j];}					// Set of Y
				else if(i == 2)	{dataSet[i][j] = product[j];}					// Set of XY
				else if(i == 3)	{dataSet[i][j] = inputSquare[j];}				// Set of X2
				else if(i == 4)	{dataSet[i][j] = outputSquare[j];}				// Set of Y2
			}
		}
		regression_maths(observeNum, inputSum, outputSum, productSum, inSquareSum, outSquareSum, interceptA, slopeB, dataSet);
	}
	return 0;
}
void regression_maths(int num, double EX, double EY, double EXY, double EX2, double EY2, double a, double b, double E[5][50])
{
	double TSS, SSE, SSR, R2, Se;
	// Respective Formulae for sums, co-efficient and error 
	TSS = EY2 - ((EY * EY) / num);
	SSE = EY2 - (a * EY) - (b * EXY);
	SSR = (a * EY) + (b * EXY) - ((EY * EY) / num);
	R2 = SSR / TSS;
	Se = sqrt(SSE / (num - 2));

	cout << "Table: " << endl;
	cout << std::left << setw(20) << "X" << setw(20) << "Y" << setw(20) << "XY" << setw(20) << "X^2" << setw(20) << "Y^2" << endl;
	for(int i = 0; i < num; i++)
	{
		for(int j  = 0; j < 5; j++)
		{
			cout << std::left << setw(20) << E[j][i];
		}
		cout << endl;
	}
	cout << endl;
	// 'left' aligns the output to left side
	cout << left << "EX = " << setw(15) << EX << "EY = " << setw(15) << EY;
	cout << left << "EXY = " << setw(14) << EXY << "EX^2 = " << setw(13) << EX2 << "EY^2 = " << setw(15) << EY2 << endl;
	cout << "Mean of Y: " << (EY / num) << endl;
	cout << "Regression model is: Y = a + b.X" << endl;
	cout << "Using least square method, we get;" << endl;
	cout << "EY = n.a + b.EX\t\t-------(i)" << endl << "EXY = a.EX + b.E(X^2)--------(ii)" << endl;
	cout << "From (i) & (ii)," << endl << "a = " << a << " & b = " << b << endl;
	cout << "The regression equation is: Y = " << a << " + " << b << ".X" << endl << endl;

	cout << "Total Sum of Squares\t\t(TSS): " << endl;
	cout << "= EY^2 - n*(Mean of Y)^2" << endl;
	cout << "= " << EY2 << " - " << num << " * " << (EY / num) << endl;
	cout << "= " << TSS << endl;
	cout << "Sum of Squares due to Error\t(SSE): " << endl;
	cout << "= EY^2 - a*EY - b*EXY" << endl;
	cout << "= " << EY2 << " - " << a << "*" << EY << " - "  << b << "*" << EXY << endl;
	cout << "= " << SSE << endl;
	cout << "Sum of Squares due to Regression(SSR): " << endl;
	cout << "= a*EY + b*EXY - n*(Mean of Y)^2" << endl;
	cout << "= " << a << "*" << EY << " + " << b << "*" << EXY << " - " << num << " * " << ((EY / num) * (EY / num)) << endl;
	cout << "= " << SSR << endl;
	cout << "Co-efficient of determination\t(R2): " << endl;
	cout << "= SSR / TSS" << endl;
	cout << "= " << SSR << " / " << TSS << endl;
	cout << "= " << R2 << endl;
	cout << "Standard Error\t\t\t(Se): " << endl;
	cout << "= root(SSE / (n - k - 1)" << endl;
	cout << "= root(" << SSE << " / " << "(" << num << " - 1 - 1)" << endl;
	cout << "= " << Se << endl;
}