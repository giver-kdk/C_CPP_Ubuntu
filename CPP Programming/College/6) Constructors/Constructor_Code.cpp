<<<<<<< HEAD
// Constructor is just special type of function
// It doesn't have return type
// It is immediately called after creation of an object
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        string name;
        double salary;
    public:
        Employee(string n, double sal);           // It is called as a constructor as it has same name as class name
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }

};
Employee :: Employee(string n, double sal)
{
    cout << "Constructor is called" << endl;
    name = n;
    salary = sal;
}
int main()
{
    Employee e("Ram", 10000);
    e.display();
}

=======
// Constructor is just special type of function
// It doesn't have return type
// It is immediately called after creation of an object
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        string name;
        double salary;
    public:
        // Constructor doesn't have return type
        Employee(string n, double sal);           // It is called as a constructor as it has same name as class name
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }

};
Employee :: Employee(string n, double sal)
{
    cout << "Constructor is called" << endl;
    name = n;
    salary = sal;
}
int main()
{
    Employee e("Ram", 10000);
    e.display();
}

>>>>>>> 35bf3c5ab498c688a9abee2efffb78c465052d71
