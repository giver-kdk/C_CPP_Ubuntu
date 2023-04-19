#include <iostream>
using namespace std;

class Score
{
	int value;
	public:
		Score(int v) : value(v){}
		void get_value()
		{
			cout << "Value: " << value << endl;
		}
		void operator ++()
		{
			++value;
		}
		void operator ++(int)
		{
			value++;
		}
};

int main()
{
	Score marks(10);
	marks.get_value();
	++marks;
	marks.get_value();
	marks++;
	marks.get_value();
	return 0;
}