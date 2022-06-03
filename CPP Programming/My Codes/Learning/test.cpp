#include <iostream>
using namespace std;

class Hello
{
	int a;
	int b;
	char c;
	// string damn;
	public:
		// Hello(){}
		Hello(int i, int j) : a(i), b(j){}
		int get_a()
		{
			return a;
		}
		int get_b()
		{
			return b;
		}
		char get_c()
		{
			return b;
		}
		// string get_s()
		// {
		// 	return damn;
		// }

};

int main()
{
	Hello World(2, 3);
	cout << "a: " << World.get_a() << endl;
	cout << "b: " << World.get_b() << endl;
	cout << "c: " << World.get_c() << endl;
	Hello Man = World;
	cout << "a: " << Man.get_a() << endl;
	cout << "b: " << Man.get_b() << endl;
	// cout << "s: " << World.get_s() << endl;
	return 0;
}