// Program to demonstrate the use of friend function with multiple class.
// A friend function can access the private data members of a class
#include <iostream>
using namespace std;
// Declare class before
class B;
class A
{
    int x;
public:
    A()
    {
        x = 10;
    }
    // We can use 'B obj' as argument because 'class B' is declared above
    friend void show(A obj1, B obj2);
};
class B
{
    int y;
public:
    B()
    {
        y = 20;
    }
    // 'friend' keyword creates a friend function
    friend void show(A obj1, B obj2);
};
void show(A obj1, B obj2)
{
    int largest;
    // Using ternary operator (condition) ? a : b
    largest = (obj1.x > obj2.y) ? obj1.x : obj2.y;
    cout << "Largest Number: " << largest<< endl;
}
int main()
{
    A r1;
    B r2;
    show(r1, r2);
}

