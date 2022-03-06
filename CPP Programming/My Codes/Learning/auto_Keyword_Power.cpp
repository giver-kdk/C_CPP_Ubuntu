#include <iostream>
using namespace std;

int main()
{
	// 'auto' automatically sets data type for variables according to data initialized
	auto a = 10;
	auto b = 12.5;
	auto c = 'G';
	auto d = "Giver Khadka";
	cout << "Integer: " << a << endl;
	cout << "Float: " << b << endl;
	cout << "Character: " << c << endl;
	cout << "String: " << d << endl;
	return 0;
}