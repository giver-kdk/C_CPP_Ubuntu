// Program to demonstrate the use of class template
#include <iostream>
#include <stdlib.h>
using namespace std;
#define LENGTH 5

template <class Type>
class Security
{
	Type array1[LENGTH], array2[LENGTH];
	public:
		void input(Type array[20])
		{
			for(int i = 0; i < LENGTH; i++)
			{
				cin >> array[i];
			}
		}
		void enter_passwords()
		{
			cout << "Password should be of length " << LENGTH << endl;
			cout << "Enter password separated by space: ";
			input(array1);
			cout << "Enter password again: ";
			input(array2);
		}
		void check_password()
		{
			for(int i = 0; i < LENGTH; i++)
			{
				if(array1[i] != array2[i])
				{
					cout << "Passwords didn't match!" << endl;
					exit(0);
				}
			}
			cout << "Congrats!!!Password Matched!" << endl;
		}
		void display_password()
		{
			cout << "First Password: ";
			for(int i = 0; i < LENGTH; i++)
			{
				cout << array1[i];
			}
			cout << endl;
			cout << "Second Password: ";
			for(int i = 0; i < LENGTH; i++)
			{
				cout << array2[i];
			}
			cout << endl;
		}
};

int main()
{
	Security <string> key;
	key.enter_passwords();
	key.display_password();
	key.check_password();
	return 0;
}