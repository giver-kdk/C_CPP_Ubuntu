// Program to display account information and minimum balance
#include <iostream>
#define NUM 5
using namespace std;

class Account
{
	int accNo;
	double balance;
	static double minBalance;
	public:
		void fill_info()
		{
			cout << "Enter account number: ";
			cin >> accNo;
			cout << "Enter account balance: ";
			cin >> balance;
		}
		void display()
		{
			cout << "Details of bank account are: " << endl;
			cout << "Account Number: " << accNo << endl;
			cout << "Account Balance: " << balance << endl;
		}
		static void show_min_balance()
		{
			cout << "Minimum balance: " << minBalance << endl;
		}
};
double Account :: minBalance = 5000;  

int main()
{
	int i;
	Account bank[NUM];
	for(i = 0; i < NUM; i++)
	{
		bank[i].fill_info();
	}
	for(i = 0; i < NUM; i++)
	{
		bank[i].display();
		Account::show_min_balance();
	}
	return 0;
}