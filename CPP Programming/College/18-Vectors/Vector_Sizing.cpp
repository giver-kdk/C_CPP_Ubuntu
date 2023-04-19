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
	// Empty vector of '0' size
	vector<int> vec1;
	// Vector of size '5' filled by '0'
	vector<int> vec2(5);
	// Vector of size same as vec2. That is 5.
	vector<int> vec3(vec2);
	// Vector of size '6' filled by '3'
	vector<int> vec4(6, 3);
	display(vec2);
	display(vec3);
	display(vec4);
	return 0;
}