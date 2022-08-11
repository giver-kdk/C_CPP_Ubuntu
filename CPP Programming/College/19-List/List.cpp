// Program to demonstrate the use of List in C++
// Little bit similar to vector
// List is a container containing elements but not like in array
// One list element's pointer points to next list elements
// Elements of list are spreaded at random memory address
// It is used because insertion and deletion of element from middle is fast
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
	num1.push_back(1);
	num1.push_back(2);
	num1.push_back(3);
	display(num1);

	// Filling non-empty list
	// List of size '3' filled by '0'
	list<int> num2(3);	
	list<int> :: iterator itr = num2.begin();
	*itr = 1;
	itr++;
	*itr = 2;
	itr++;
	*itr = 3;
	itr++;
	display(num2);

	// Filling list during declaration
	// List of size '3' filled by '7'
	list<int> num3(3, 7);
	display(num3);


	// Removing list elements
	// Remove last element
	num1.pop_back();
	display(num1);
	// Remove first element
	num1.pop_front();
	display(num1);
	// Remove all occurence of specified element
	display(num2);
	num2.remove(2);			// All '2's is removed from list
	display(num2);


	return 0;
}