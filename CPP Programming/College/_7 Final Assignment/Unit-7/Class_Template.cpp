// Program to demonstrate the use of class template
#include <iostream>
using namespace std;

template <class Ttype>
class Array
{
	Ttype *arr;
	int size;
public:
	Array(int s) : size(s)
	{
		arr = new Ttype[size];
	}
	~Array()
	{
		delete []arr;
	}
	void input()
	{
		for(int i = 0; i < size; i++)
		{
			cout << "Enter element " << i + 1 << " : ";
			cin >> arr[i];
		}
	}
	void display()
	{
		cout << "Array elements are: " << endl;
		for(int i = 0; i < size; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
};


int main()
{
	Array <int> num(5);
	num.input();
	num.display();
	return 0;
}