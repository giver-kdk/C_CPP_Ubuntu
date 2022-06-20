#include <iostream>
using namespace std;

class Score
{
	int value;
	public:
		Score(){}
		Score(int v) : value(v){}
		void operator ++()
		{
			++value;
		}
		void operator ++(int)
		{
			value++;
		}
		void display()
		{
			cout << "Value: " << value << endl;
		}
};

int main()
{
	Score marks(10);
	marks.display();
	++marks;
	marks.display();
	marks++;
	marks.display();
	return 0;
}