// Program to demostrate the use of vector in C++
// Vector is a Standard Template Library(STL) in C++
// It is similar to an array of any data type
// It provides built in features like adding, inserting, deleting elements
// There are more functions for vectors.
#include <iostream>
#include <vector>

using namespace std;

// Vector type variable as function parameter
void display(vector<int> v)
{
	cout << "Vector elements are: " << endl;
	for(int i = 0; i < v.size(); i++)			// vec.size() gives current vector size
	{
		// cout << v[i] << '\t';					// Accessing vector elements
		cout << v.at(i) << '\t';				// Accessing vector elements
	}
	cout << endl;
}

int main()
{
	int s, i, data;
	// Declaring vector of integer data type
	vector <int> vec;							// It can be float, char, string, etc.
	// Declaring iterator(index pointer) for vector
	vector <int >::iterator itr;
	cout << "Enter the size of vector: ";
	cin >> s;
	// Adding elements in empty vector
	cout << "Enter the elements of vector: ";
	for(i = 0; i < s; i++)					
	{
		cin >> data;
		vec.push_back(data);
	}
	
	display(vec);


	// Inserting elements in vectors by shifting other elements
	itr = vec.begin();						// Iterator pointing to first index of vector
	cout << "Value pointed by iterator: " << *itr << endl;


	cout << "Enter element to be inserted at beginning: ";
	cin >> data;
	// vec.insert(itr, data);					// Inserting element in pointed index of vector
	// vec.insert(itr + 1, data);				// Inserting element in next index of vector
	vec.insert(itr, 5, data);					// Inserting 'n' number of element in vector
	display(vec);


	// Removing elements from vector
	vec.pop_back();
	cout << "After popping are: " << endl;
	display(vec);

	return 0;
}