#include <iostream>
using namespace std;

// 'Type' will act as a variable data type.
//  It can denote integer, float or double according to parameter
/*
    syntax;
    template <class Template_type> 
    return_type function_name(Template_type,...,Template_type)
    {
        Statement;
    }
*/
template <class Type>
Type sum(Type a, Type b)
{
    Type res;
    res = a + b;
    return res;
}
int main()
{
    cout << "Sum: " << sum(10, 20) << endl;
    cout << "Sum: " << sum(10.26, 20.56) << endl;
    // Different data type in same template function not allowed.
    // So, it requires a template with different data type parameters
    // cout << "Sum: " << sum(10, 20.56) << endl;
}
