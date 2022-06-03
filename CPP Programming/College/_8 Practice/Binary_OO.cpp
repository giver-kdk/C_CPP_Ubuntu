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
		Score operator +(Score obj)
		{
			Score temp(0);
			temp.value = value + obj.value;
			return temp;
		}
};

int main()
{
	Score math(80), science(90), total(0);
	total = math + science;
	total.get_value();
	return 0;
}