#include <iostream>
using namespace std;

class Person
{
	static int count;
	public:
		Person()
		{
			count++;
		}
		static void display()
		{
			cout << "Number of objects: " << count << endl;
		}
};
int Person :: count = 0;

int main()
{
	Person p1, p2, p3;
	Person :: display();
	return 0;
}