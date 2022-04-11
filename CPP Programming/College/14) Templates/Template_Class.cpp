
#include <iostream>
using namespace std;

// 'Type' will act as a data type here. It can denote integer, float or double according to parameter
template <class Type>
class Array
{
    Type arr[5];
public:
    void insert(Type elem, int i)
    {
        arr[i] = elem;
    }
    void display()
    {
        for(int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void sort()
    {
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(arr[i] < arr[j])
                {
                    Type temp;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
};
int main()
{
    // Array <char> obj;   
    // <double> specifies the data type to apply on template class
    Array <double> obj;

    // char value;                           // Character can also be sorted using ASCII value
    double value;
    cout << "Enter 5 elements of an array: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> value;
        obj.insert(value, i);
    }
    cout << "Before Sort: " << endl;
    obj.display();
    cout << "After Sort: " << endl;
    obj.sort();
    obj.display();
}