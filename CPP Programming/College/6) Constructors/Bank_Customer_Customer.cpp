<<<<<<< HEAD

#include <iostream>
#include <string>
using namespace std;

class Bank
{
    private:
        string customerName;
        double amount;

    public:
        Bank(string name, double money);    // Declaration of constructor
        string get_name();
        double get_balance();
        void withdraw(double withdraw);
        void deposite(double deposite);
        void display();
};
int main()
{
    Bank user("Ram", 10000);
    cout << "Customers current balance: " << user.get_balance() << endl;
    user.withdraw(5000);
    user.deposite(10000);
    user.withdraw(2000);
    user.display();
}
Bank ::Bank(string name, double money)
{
    cout << "Constructor is called" << endl;
    customerName = name;
    amount = money;
}
string Bank ::get_name()
{
    return customerName;
}
double Bank ::get_balance()
{
    return amount;
}
void Bank ::withdraw(double withdraw)
{
    if (amount >= withdraw)
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
void Bank ::deposite(double deposite)
{
    amount = amount + deposite;
    cout << "Amount deposited successfully" << endl;
    cout << "Current balance is: " << amount << endl;
}
void Bank ::display()
{
    cout << "Following are the user details: " << endl;
    cout << "Name: " << customerName << endl;
    cout << "Available Balance: " << amount << endl;
}
=======

#include <iostream>
#include <string>
using namespace std;

class Bank
{
    private:
        string customerName;
        double amount;

    public:
        // Constructor doesn't have return type
        Bank(string name, double money);        // Declaration of constructor
        string get_name();
        double get_balance();
        void withdraw(double withdraw);
        void deposite(double deposite);
        void display();
};
int main()
{
    Bank user("Ram", 10000);
    cout << "Customers current balance: " << user.get_balance() << endl;
    user.withdraw(5000);
    user.deposite(10000);
    user.withdraw(2000);
    user.display();
}
// Constructor doesn't have return type
Bank :: Bank(string name, double money)
{
    cout << "Constructor is called" << endl;
    customerName = name;
    amount = money;
}
string Bank ::get_name()
{
    return customerName;
}
double Bank ::get_balance()
{
    return amount;
}
void Bank ::withdraw(double withdraw)
{
    if (amount >= withdraw)
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
void Bank ::deposite(double deposite)
{
    amount = amount + deposite;
    cout << "Amount deposited successfully" << endl;
    cout << "Current balance is: " << amount << endl;
}
void Bank ::display()
{
    cout << "Following are the user details: " << endl;
    cout << "Name: " << customerName << endl;
    cout << "Available Balance: " << amount << endl;
}
>>>>>>> 35bf3c5ab498c688a9abee2efffb78c465052d71
