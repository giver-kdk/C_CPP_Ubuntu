// Program to concatinate two strings using '+' operator and 'append()' function
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name = "Giver ", surname = "Khadka", fullname, sentence;
	cout << "Your name is: " << name << endl;
	cout << "Your surname is: " << surname << endl;
	// Combined string stored in 'fullname'
	fullname = name + surname;
	// Any other string/character can be added from between
	sentence = name + "cast is " + surname;
	cout << "Your full name is: " << fullname << endl;
	cout << sentence << endl;

	string a = "10";
 	// NOTE: For concatinating using '+', there should be atleast one 'string' variable
	string numbers = a + "20";			// Here, 'a' is the string variable
	cout << numbers << endl;
   
	// 'append()' similarly concatinates string
	string myName;
	myName = name.append(surname); // 'surname' is appended/added in 'name'
	cout << "Full name using append: " << myName << endl;
	return 0;
}