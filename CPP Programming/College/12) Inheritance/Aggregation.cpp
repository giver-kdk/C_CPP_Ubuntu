// Program to demonstrate 'has a relation' by referencing another class objects
// This is similar to pointer in structure 
#include <iostream>
#include <string>
using namespace std;

class Address
{
    string city;
    int ward_num;
    string district;
    string province;
    public:
    Address(string c, int w, string d, string p):city(c), ward_num(w), district(d), province(p){}
    void get_full_address()
    {
        cout << "Address: ";
        cout << city << ward_num << endl;
        cout << "District: ";
        cout << district << endl;
        cout << "Province: ";
        cout << province << endl;
    }
};

class Employee
{
    string name;
    double salary;
    // Basically a class pointer
    Address *addr;
    public:
    Employee(string n, double s, Address *ad) : name(n), salary(s), addr(ad){}
    void get_full_info()
    {
        cout << "Following are the employee details..." << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "-------------------------------------------------------------------" << endl;
        // get_full_address() function of class pointed by 'addr'
        addr->get_full_address();               // '->' is class member access member
    }

};
int main()
{
    Address a("Sankhamul", 8, "Lalitpur", "03");
    Employee e("Ram", 10000, &a);
    e.get_full_info();
}
