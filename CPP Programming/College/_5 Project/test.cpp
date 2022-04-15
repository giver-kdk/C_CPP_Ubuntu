#include <iostream>
#include <fstream>
#define NUM 2
#define DETAILS 11
using namespace std;
class Student
{
    string name;
    int roll, age, grade;
    char sec;
    double reg_no, symbol, marks;
    string address;
    double phone_number;
    string dob;
    public:
    string get_name()
    {
        return name;
    }
    int get_roll()
    {
        return roll;
    }
    char get_section()
    {
        return sec;
    }
    int get_age()
    {
        return age;
    }
    int get_grade()
    {
        return grade;
    }
    double get_reg_no()
    {
        return reg_no;
    }
    double get_symbol()
    {
        return symbol;
    }
    double get_marks()
    {
        return marks;
    }
    double get_phonenumber()
    {
        return phone_number;
    }
    string get_dob()
    {
        return dob;
    }
    double getpercent(double marks)
    {
        return(marks/5);
    }
    string get_address()
    {
        return address;
    }
    void getinfo()
    {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the roll number: ";
        cin >> roll;
        cout << "Enter the age: ";
        cin >> age;
        // cout << "Enter the DOB:" ;
        // cin >> dob;
        cout << "Enter the class: ";
        cin >> grade;
        cout << "Enter the section: ";
        cin >> sec;
        cout << "Enter the symbol number: ";
        cin >> symbol;
        cout << "Enter the registration number: ";
        cin >> reg_no;
        cout << "Enter the address: ";
        cin >> address;
        cout << "Enter the phone number: ";
        cin >> phone_number;
        cout << "Enter date of birth: ";
        cin >> dob;
        cout << "Enter the marks obtained: ";
        cin >> marks;
    }
    void display()
    {
        cout << "The details of the students are: " << endl;
        cout << "---------------------------------- "<< endl;
        cout << "Name: " << name << endl;
        cout << "Roll number: " << roll << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
        cout << "Section: "<< sec << endl;
        cout << "Address: " << address << endl;
        cout << "Symbol: " << symbol << endl;
        cout << "Phone number: " << phone_number << endl;
        cout << "Marks: " << marks<< endl;
        cout << "percentage: " << getpercent(marks) << endl;
    }
};
int main()
{
    int i;
    fstream stu;
    Student s[NUM];
    stu.open("stu.txt", ios::out);
    if(!stu)
    {
        cout << "ERROR: FILE CANNOT BE CREATED." << endl;
    }
    else
    {
        cout << "FILE SUCCESSFULLY CREATED." << endl;
        cout << "Register Students...." << endl;
        for(i=0;i<NUM;i++)
        {
            s[i].getinfo();
            // File Write
            stu << s[i].get_reg_no() << endl;
            stu << "Name: " << s[i].get_name() << endl;
            stu << "Roll number: " << s[i].get_roll() << endl;
            stu << "Age: " << s[i].get_age() << endl;
            stu << "Grade: " << s[i].get_grade() << endl;
            stu << "Section: "<< s[i].get_section() << endl;
            stu << "Registration Number: " << s[i].get_reg_no() << endl;
            stu << "Symbol: " << s[i].get_symbol() << endl;
            stu << "Marks: " << s[i].get_marks() << endl;
            stu << "Address: " << s[i].get_address() << endl;
            stu << "Phone number: " << s[i].get_phonenumber() << endl;
            stu << "Date of Birth: " << s[i].get_dob() << endl;
        }
		
        
    }
    stu.close();
    stu.open("student.txt", ios::in);
    char ch;
    string number, str;
    cout << "Search regstered student...." << endl;
    cout << "Enter registration number of student: " << endl;
    cin >> number;
    while(!stu.eof())
    {
        // Store a line from file to data
        getline(stu, str);
        if(str == number)
        {
            cout << "Details of the student: " << endl;
            for(i = 0; i < DETAILS; i++)
            {
                getline(stu, str);
                cout << str << endl;
            }
        }
        else
        {
            cout << "Student not found" << endl;
        }
    }
}