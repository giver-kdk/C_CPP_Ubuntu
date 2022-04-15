#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#define NUM 2
using namespace std;
class Student
{
    string name;
    int roll, age, grade;
    char sec;
    double symbol, marks;
    string address, dob;
    double phone;
    public:
    string get_name()
    {
        return name;
    }
    int get_roll()
    {
        return roll;
    }
    int get_age()
    {
        return age;
    }
    int get_grade()
    {
        return grade;
    }
    char get_sec()
    {
        return sec;
    }
    double get_symbol()
    {
        return symbol;
    }
    double get_marks()
    {
        return marks;
    }
    double get_phone()
    {
        return phone;
    }
    string get_address()
    {
        return address;
    }
    string get_dob()
    {
        return dob;
    }
    void getinfo()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the roll number: ";
        cin >> roll;
        cout << "Enter the age: ";
        cin >> age;
        cout << "Enter the class: ";
        cin >> grade;
        cout << "Enter the section: ";
        cin >> sec;
        cout << "Enter the symbol number: ";
        cin >> symbol;
        cout << "Enter the address: ";
        cin >> address;
        cout << "Enter the phone number: ";
        cin >> phone;
        cout << "Enter date of birth: ";
        cin >> dob;
        cout << "Enter the marks obtained: ";
        cin >> marks;
    }
    void display()
    {
        cout << "\nThe details of the students are: " << endl;
        cout << "-------------------------------------" << endl;
         cout << "Name: " << name << endl;
        cout << "Roll number: " << roll << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
        cout << "Section: "<< sec << endl;
        cout << "Address: " << address << endl;
        cout << "Symbol: " << symbol << endl;
        cout << "Phone number: " << phone << endl;
        cout << "Marks: " << marks<< endl;
       // cout << "Percentage: " << getpercent() << endl;
    }
};
int main()
{
    int i, num;
    fstream stu;
    Student s;
    stu.open("STUDENT.txt", ios::out);
    if(!stu)
    {
        cout << "ERROR: FILE NOT CREATED." << endl;
    }
    else
    {
        cout << "FILE SUcCESSFULLY CREATED." << endl;
        cout << "Enter the number of students you want: ";
        cin >> num;
        for(i=0;i<num;i++)
        {
            cout << "\nFor " << i+1 << " student" << endl;
            s.getinfo();
            stu << s.get_symbol() << endl;
            stu << "Name: " << s.get_name() << endl;
            stu << "Roll number: " << s.get_roll() << endl;
            stu << "Age: " << s.get_age() << endl;
            stu << "Grade: " << s.get_grade() << endl;
            stu << "Section: "<< s.get_sec() << endl;
            stu << "Symbol: " << s.get_symbol() << endl;
            stu << "Marks: " << s.get_marks() << endl;
            stu << "Address: " << s.get_address() << endl;
            stu << "Phone number: " << s.get_phone() << endl;
            stu << "Date of Birth: " << s.get_dob() << endl;
            stu << endl;
        }
    }
    stu.close();

    char ch;
    string str, number;
    stu.open("STUDENT.txt", ios::in);
    if(!stu)
    {
        cout << "ERROR: FILE NOT CREATED." << endl;
    }
    else
    {
        cout << "------------------------" << endl;
        cout << "Search for the details: " << endl;
        cout << "Enter the symbol number of the student: ";
        cin >> number;
        while(!stu.eof())
        {
            getline(stu, str);
            if(str == number)
            {
               cout << "Details: " << endl;
               for(i=0;i<10;i++)
               {
                    getline(stu, str);
                    cout << str << endl;
               }
			   return 0;
            }
            cout << endl;
            stu.close();
        }
        cout << "NOT FOUND." << endl;
    }
}