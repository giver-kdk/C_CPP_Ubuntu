#include<iostream>
using namespace std;

int highest = 60;

int &updateTo()
{
	return highest;
}
int bonus(int score)
{
	return (score + 25);
}

int main()
{
	int num;
	cout << "Current high score is: " << highest << endl;
	cout << "Enter the new high score: ";
	cin >> num;
	// Assign value of 'num' to 'highest'
	updateTo() = num;
	cout << "New high score: " << highest << endl;
	// Assign value returned by 'bonus()' to 'highest'
	updateTo() = bonus(num);
	cout << "High score with bonus: " << highest << endl;
	return 0;
}