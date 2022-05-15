// Program to show the use of template with concept of inheritance
#include <iostream>
using namespace std;

template <class Type>
class Data
{
	Type value;
	public:
		Data(Type v) : value(v){};
		void show_data()
		{
			cout << "The data is: " << value << endl;
		}
};
template <class Type>
class MiniData : public Data <Type>
{
	Type miniValue;
	public:
		MiniData(Type a, Type b) : Data <Type> (a), miniValue(b){};
		void show_mini()
		{
			Data <Type> :: show_data();
			// this->show_data();				// This is also valid
			cout << "The mini data is: " << miniValue << endl;
		}
};
int main()
{
	MiniData <int> num(10, 3);
	num.show_mini();
	return 0;
}