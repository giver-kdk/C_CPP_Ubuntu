//returning by reference from a function as a parameter
#include<iostream>
using namespace std;
int x=5,y=15;//globel variable
int &setx();
int main()
{
setx()=y;
//assign value of y to the variable
//returned by the function
cout<<"x="<<x<<endl;
return 0;
}
int &setx()
{
//display global value of x
cout<<"x="<<x<<endl;
return x;
}