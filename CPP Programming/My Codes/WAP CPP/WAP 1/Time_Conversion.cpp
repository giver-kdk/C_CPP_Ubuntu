// Write a C++program to input time in second convert it into hours, minutes and second.
#include <iostream>
using namespace std;

int main()
{
	long seconds, hours, minutes;
	cout << "Enter time in seconds: ";
	cin >> seconds;
	minutes = seconds / 60;
	hours = minutes / 60;
	cout << "Time in hours: " << hours << " hrs" << endl;
	cout << "Time in minutes: " << minutes << " mins" << endl;
	cout << "Time in seconds: " << seconds << " secs" << endl;
	return 0;
}