// 'Program to dynamically allocate memory using 'new' 
// If 'new' fails to allocate memory, then it throws a exception(error) object called 'bad_alloc' rather than returning NULL
#include<iostream>
using namespace std;

int main()
{
    // 'nothrow' stops the exception throwing and allows 'new' to return NULL on failure
    int *ptr = new(nothrow) int;                    // Integer size memory is allocated
    // double(20.56) is equivalent to a default constructor being called
    double *ptr2 = new(nothrow) double(20.56);      // Double size memory and also value is initialized 
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
    // 'delete' deletes the allocated memory pointed by 'ptr'
    delete ptr;
    delete ptr2;
    return 0;
}