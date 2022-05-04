//WAP to count the number of object created
#include <iostream>
using namespace std;
class Rectangle
{
    int number;
public:
    // Static variable
    static int counter;
    Rectangle()
    {
        counter++;
    }
};
int Rectangle :: counter = 0;
int main()
{
    Rectangle r1, r2, r3, r4, r5;
    // Static variable can be used with class and scope resolution operator
    cout << "The number of object created: " << Rectangle :: counter << endl;
}
