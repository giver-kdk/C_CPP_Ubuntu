// Program to demonstrate binary operator overload
#include <iostream>
using namespace std;

class Score
{
	public:
		int count;
		Score(int c) : count(c) {}
		void get_count()
		{
			cout << "Score is: " << count << endl;
		}
		// Since, we get a result after adding two operands. So, we return an object
		Score operator +(Score obj)
		{
			Score temp(0);
			temp.count = count + obj.count;
			return temp;
		}
		// Compare data members and return corresonding boolen value 
		bool operator ==(Score obj)
		{
			if(count == obj.count)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void operator =(Score obj)
		{
			count = obj.count;			// Simply assign corresponding data member
		}
};

int main()
{
	Score  first(5), second(4);
	cout << "First ";
	first.get_count();
	cout << "Second ";
	second.get_count();
	first = first + second;
	cout << "After Adding Second Score, First ";
	first.get_count();
	second = first;
	cout << "After Assiging First Score, Second ";
	second.get_count();
	if(first == second)
	{
		cout << "Value Assignment Successfull!" << endl;
	}
	else
	{
		cout << "Value Assigment Failure!" << endl;
	}
	return 0;
}