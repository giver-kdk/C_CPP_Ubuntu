// Program to create a linked list using class and pointers members
// This method can be applied using structure in C.
#include <iostream>
using namespace std;

class Node						// Linked list has nodes. So, this class represents a node
{
	public:
		int value;
		Node *next;				// Internal pointer of 'Node' class
};
void print_list(Node *ptr);

int main()
{
	// Pointers pointing to 'Node' class
	Node *first = new(nothrow) Node;
	Node *second = new(nothrow) Node;
	Node *third = new(nothrow) Node;

	// Link the internal pointer('next') of the class pointed by 'first' to 'second' class pointer
	first -> next = second;
	second -> next = third;
	third -> next = NULL;		// Pointing to 'NULL' terminates linked list

	// Set the 'value' of class pointed by 'first' pointer
	first -> value = 3;
	second -> value = 4;
	third -> value = 5;

	// Entire node can be accessed using one node('first') of linked list
	cout << first -> value << endl;
	cout << first -> next -> value << endl;
	cout << first -> next -> next -> value << endl << endl;

	// Can be printed using loop
	print_list(first);
	// Calling the printing function doesn't affect the actual link pointer
	cout << first -> value << endl;
	return 0;
}

void print_list(Node *ptr)
{
	while(ptr != NULL)
	{
		cout << ptr -> value << endl;
		// 'ptr' is now the internal pointer('next') of the class pointed by 'ptr' itself
		ptr = ptr -> next;
	}
}