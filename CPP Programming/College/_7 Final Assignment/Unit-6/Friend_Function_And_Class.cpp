// Program to demonstrate friend function and friend class
#include <iostream>
using namespace std;

class Army;
class Defense
{
	string name;
	string post;
	string paltan;
	public:
		Defense(){}
		friend class Army;
		friend void input(Defense obj);
};
void input(Defense obj)
{
	cout << "Enter name: ";
	getline(cin, obj.name);
	cout << "Enter post: ";
	getline(cin, obj.post);
	cout << "Enter paltan: ";
	getline(cin, obj.paltan);
}
class Army
{
	public:
		Army(){}
		void display(Defense obj)
		{
			cout << "Name: " << obj.name << endl;
			cout << "Post: " << obj.post << endl;
			cout << "Paltan: " << obj.paltan << endl;
		}
};

int main()
{
	Defense laure;
	input(laure);
	Army gorkhali;
	gorkhali.display(laure);
	return 0;
} 