#include <iostream>
#include <string>
using namespace std;

class Bank
{
	private:

		string customerName;
		double amount;
	public:       
		void set_name(string name);
		void set_balance(double balance);
		string get_name();
		double get_balance();
		void withdraw(double withdraw);
		void deposite(double deposite);
		void display();
};
int main()
{
    Bank user;
    user.set_name("Ram");
    user.set_balance(0);
    cout << "Customers current balance: " << user.get_balance() << endl;
    user.withdraw(5000);
    user.deposite(10000);
    user.withdraw(2000);
    user.display();
}
void Bank :: set_name(string name)
{
    customerName = name;
}
void Bank :: set_balance(double balance)
{
    amount = balance;
}
string Bank :: get_name()
{
    return customerName;
}
double Bank :: get_balance()
{
    return amount;
}
void Bank :: withdraw(double withdraw)
{
    if(amount >= withdraw)
        {
            amount = amount - withdraw;
            cout << "Amount withdraw successful" << endl;
            cout << "Current balance is: " << amount << endl;
        }
    else
    {
        cout << "Not sufficient balance" << endl;
    }
}
void Bank :: deposite(double deposite)
{
    amount = amount + deposite;
    cout << "Amount deposited successfully" << endl;
    cout << "Current balance is: " << amount << endl;
}
void Bank :: display()
{
    cout << "Following are the user details: " << endl;
    cout << "Name: " << customerName << endl;
    cout << "Available Balance: " << amount << endl;
}
