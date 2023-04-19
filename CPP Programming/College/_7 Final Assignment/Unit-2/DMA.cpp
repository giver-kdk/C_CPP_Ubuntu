#include<iostream>
using namespace std;

int main()
{
    int *ptr = new(nothrow) int;                  
    double *ptr2 = new(nothrow) double(20.56);     
    if(ptr == NULL)
    {
        cout << "Unable to allocate memory" << endl;
    }
    else
    {
        *ptr = 20;
        cout << "Value pointed by ptr: " << *ptr << endl;
    }

    if(ptr2 == NULL)
    {
        cout << "Unable to allocate memory" << endl;
    }
    else
    {
        cout << "Value pointed by ptr2: " << *ptr2 << endl;
    }
    delete ptr;
    delete ptr2;
    return 0;
}