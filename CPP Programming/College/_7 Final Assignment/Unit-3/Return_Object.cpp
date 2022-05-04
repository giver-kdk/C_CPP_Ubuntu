// Progran to return object from function
#include <iostream>
using namespace std;

class Singer
{
	string name;
	string album;
	public:
		string genre;
		Singer(string n, string a, string g) : name(n), album(a), genre(g){}
};
string get_genre(Singer obj)
{
	return obj.genre;
}
int main()
{
	Singer American("Lil Nas X", "Montero", "Hip-Hop");
	cout << "Genre is: " << get_genre(American) << endl;
	return 0;
}