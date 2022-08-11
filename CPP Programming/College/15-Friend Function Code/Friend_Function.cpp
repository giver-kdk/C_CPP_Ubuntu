// Program to demonstrate the use of friend function.
// A friend function can access the private data members of a class
#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;
public:
    Rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    // 'friend' keyword creates a friend function
    friend void show_area(Rectangle temp);
};
void show_area(Rectangle temp)
{
    cout << "Area: " << temp.length * temp.breadth << endl;
}
int main()
{
    Rectangle r(10, 20);
    show_area(r);
}
