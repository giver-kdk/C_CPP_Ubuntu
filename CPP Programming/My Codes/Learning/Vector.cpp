#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> array;
	// Here, 'auto' sets vector iterator data type to 'i' automatically
	for(int i = 0; i < 5; i++)
	{
		array.push_back(i);
	}
	for(auto i = array.begin(); i != array.end(); i++)
	{
		// We need to dereference 'i' to access its pointed value
		cout << *i << "\t";
	}
	cout << endl;
	return 0;
}