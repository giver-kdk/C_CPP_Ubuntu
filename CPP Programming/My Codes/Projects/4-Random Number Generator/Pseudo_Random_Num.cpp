// Program to generate randomValue number using a simple algorithm and sytem time as seed value
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	time_t now = time(0);	   									// Get  current system time
	tm *ltm = localtime(&now); 									// Get time in structure
	int minimum, maximum, a = 15, c = 12, mod = 100;
	int seed = ltm->tm_sec; 									// Set current second as seed value
	cout << "Enter minimum and maximum values: ";
	cin >> minimum >> maximum;
	int difference = maximum - minimum;
	double randomValue = (((a * seed) + c) % mod); 				// Pseudo Random Number Generation Algorithm
	double percentage = randomValue / 100;
	int result = (percentage * difference) + minimum;			// Set the random value between given range
	cout << "The Random number is: " << result << endl;
	return 0;
}