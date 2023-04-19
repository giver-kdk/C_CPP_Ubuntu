//WAP to count the number of object created using static function
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
    static void obj_count()
    {
        cout << "Number of objects created: " << Rectangle :: counter << endl;
    }
};
int Rectangle :: counter = 0;
int main()
{
    Rectangle r1, r2, r3, r4, r5;
    // Static function can be called with class and scope resolution operator
    Rectangle :: obj_count();
}
