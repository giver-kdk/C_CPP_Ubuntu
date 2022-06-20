#include <iostream>
using namespace std;

class Army
{
	int count;
	public:
		Army(){}
		Army(int n) : count(n){}
		Army add_army(Army man1, Army man2) 
		{
			Army man;
			man.count = man1.count + man2.count;
			return man;
		}
		void display();
};
void Army :: display()
{
	cout << "Total count: " << count << endl;
}

int main()
{
	Army pilot(3), commando(5);
	Army fighter;
	fighter = fighter.add_army(pilot, commando);
	fighter.display();
	return 0;
}