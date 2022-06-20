#include <iostream>
using namespace std;

template <class Ttype>
class Stack
{
	int size;
	Ttype *data;
	public:
		Stack(){}
		Stack(int s) : size(s)
		{
			data = new Ttype[size];
		}
		void input()
		{
			cout << "Enter stack elements: " << endl;
			for(int i = 0; i < size; i++)
			{
				cout << "Enter element " << i + 1 << ": ";
				cin >> data[i];
			}
		}
		void display()
		{
			cout << "Stack elements are: " << endl;
			for(int i = 0; i < size; i++)
			{
				cout << data[i] << endl;
			}
		}
};

int main()
{
	Stack<int> s1(5);
	Stack<string> s2(5);
	s1.input();
	s2.input();
	s1.display();
	s2.display();
	return 0;
}