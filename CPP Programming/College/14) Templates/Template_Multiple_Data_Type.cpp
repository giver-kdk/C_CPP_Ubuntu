#include <iostream>
using namespace std;
// 'Type' will act as a data type here. It can denote integer, float or double according to parameter
template <class Type1, class Type2> 
// This function returns whatever data-type is 'Type2'
Type2 sum(Type1 a, Type2 b)
{
    Type2 res;
    res = a + b;
    return res;
}
int main()
{
    cout << "Sum: " << sum(10, 20) << endl;
    cout << "Sum: " << sum(10.26, 20.56) << endl;
    cout << "Sum: " << sum(10, 20.56) << endl;
}

