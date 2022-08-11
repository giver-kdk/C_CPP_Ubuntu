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
Singer get_genre(Singer obj1, Singer obj2)
{
	if(obj1.genre == "Hip-Hop")
	{
		return obj1;
	}
	else
	{
		return obj2;
	}
}
int main()
{
	Singer American("Lil Nas X", "Montero", "Hip-Hop");
	Singer Indian("Arijit Singh", "Arijit", "Indian Pop");
	// Detect Hip-Hop Genre
	cout << "Genre is: " << get_genre(American, Indian).genre << endl;
	return 0;
}