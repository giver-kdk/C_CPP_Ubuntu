#include <iostream>
using namespace std;
class account
{
	int account_number;
	double balance;
	static double min_balance;

public:
	void getdata()
	{
		cout << "enter the account: ";
		cin >> account_number;
		cout << "enter the balance: ";
		cin >> balance;
	}
	void display()
	{
		cout << "account number: " << account_number << endl;
		cout << "balance: " << balance << endl;
	}
	static void show()
	{
		cout << "minimum balance: " << min_balance << endl;
	}
};
double account::min_balance = 1000;
int main()
{
	account a[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		a[i].getdata();
	}
	for (i = 0; i < 5; i++)
	{
		a[i].display();
		a[i].show();
	}
}