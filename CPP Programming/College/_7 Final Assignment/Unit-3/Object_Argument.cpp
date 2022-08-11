// Program to use object as function argument
#include <iostream>
using namespace std;

class Gun
{
	string model;
	double range;
	double weight;
	public:
		Gun(string m, double r, double w) : model(m), range(r), weight(w){}
		void show_features()
		{
			cout << "Gun Model: " << model << endl;
			cout << "Max Range: " << range << " meters" << endl;
			cout << "Weight: " << weight << " KG" << endl;
		}
};
void see_gun(Gun obj)
{
	obj.show_features();
}
int main()
{
	Gun rifle("AK47", 3000, 25);
	see_gun(rifle);
	return 0;
}