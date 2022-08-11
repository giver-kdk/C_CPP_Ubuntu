#include <iostream>
using namespace std;

class Score
{
	int value;
	public:
		Score(){}
		Score(int v) : value(v){}
		Score operator +(Score obj)
		{
			Score temp;
			temp.value = value + obj.value;
			return temp;
		}
		void operator =(Score obj)
		{
			value = obj.value;
		}
		bool operator ==(Score obj)
		{
			if(value == obj.value)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void display()
		{
			cout << "Value: " << value << endl;
		}
};

int main()
{
	Score obj1(2), obj2(3), obj3;
	obj3 = obj1 + obj2;
	obj3.display();
	return 0;
}