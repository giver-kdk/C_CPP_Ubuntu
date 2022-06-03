// Program to show unary operator overload(prefix and postfix)
#include <iostream>
using namespace std;

class Score
{
	int count;
	public:
		Score(int c) : count(c){}
		void get_count()
		{
			cout << "Score count is: " << count << endl;
		}
		// Prefix operator overload
		void operator ++()
		{
			++count;
		}
		// Postfix operator overload
		void operator ++(int)
		{
			count++;
		}
};

int main()
{
	Score high(10);
	high.get_count();
	++high;
	cout << "After Pre Increment" << endl;
	high.get_count();
	high++;
	cout << "After Post Increment" << endl;
	high.get_count();

	return 0;
}