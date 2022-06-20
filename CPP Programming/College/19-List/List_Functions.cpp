// Program to demonstrate the use of List functions in C++
#include <iostream>
#include <list>
using namespace std;

void display(list<int> lis)
{
	cout << "List elements are: " << endl;
	// We cant use integer iterator like in vector or array
	// We use list interator(pointer) to access list elements 
	list<int> :: iterator i;
	for(i = lis.begin(); i != lis.end(); i++)		// Iterate from start to end
	{
		cout << *i << '\t';					// '*i' is value pointed by iterator
	}
	cout << endl;
}

int main()
{
	// Filling empty list
	list<int> num1;
	num1.push_back(4);
	num1.push_back(6);
	num1.push_back(5);
	cout << "First List: " << endl;
	display(num1);
	list<int> num2;
	num2.push_back(2);
	num2.push_back(1);
	num2.push_back(3);
	cout << "Second List: " << endl;
	display(num2);

	// Reverse List Elements
	cout << "Reversed List: " << endl;
	num1.reverse();
	display(num1);

	
	// Merge two lists into one
	cout << "Merged List: " << endl;
	num1.merge(num2);				// num1 = num1 + num2
	display(num1);

	// Sort List Elements
	cout << "Sorted List in Ascending Order: " << endl;
	num1.sort();
	display(num1);

	return 0;
}