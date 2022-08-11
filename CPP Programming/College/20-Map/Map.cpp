// Program to demonstrate usse of Map in C++
// Map is a container to store pair of data ('Key' and 'Value')
// It is similar to two related array used in ASM to HEX for Instruction and Hex Value
// It is an associated array which means two different variables are linked 
// NOTE: Map elements are automatically sorted according to the 'Key'
#include <iostream>
#include <map>
#include <string>

using namespace std;

void display(map<string, int> m)
{
	// Iterator is needed to access map's element pairs
	map<string, int> :: iterator i;
	for(i = m.begin(); i != m.end(); i++)
	{
		// 'first' is used to access 'Key' element
		// 'second' is used to access 'Value' element
		cout << (*i).first << '\t' << (*i).second << endl;
	}
}

int main()
{
	// Initializing Map
	// Empty map with 'string' key and 'integer' value
	map<string, int> marksMap;
	map<string, int> :: iterator itr = marksMap.begin(); 
	marksMap["Ram"] = 80;			// marksMap[Key] = Value
	marksMap["Shyam"] = 90;			
	marksMap["Hari"] = 70;	
	display(marksMap);		

	// Inserting pair elements in map
	cout << endl << "After Insertion" << endl;
	marksMap.insert({{"Rita", 95}, {"Gita", 98}});
	display(marksMap);		


	cout << "Map Size: " << marksMap.size() << endl;
	return 0;
}