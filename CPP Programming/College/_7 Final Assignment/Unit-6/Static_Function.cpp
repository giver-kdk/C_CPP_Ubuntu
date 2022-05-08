// Program to demonstrate static function
#include <iostream>
using namespace std;

class Army
{
	static int count;
	public:
		Army()
		{
			count++;
		}
		static void display_count()
		{
			cout << "Number of armies: " << count << endl;
		}
};
int Army :: count = 0;

int main()
{
	Army fighter, commando, pilot, guard;
	Army::display_count();
	return 0;
}