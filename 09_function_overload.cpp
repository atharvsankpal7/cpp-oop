#include <iostream>
using namespace std;

template <class t>
void func(t a)
{
    cout << "The template function has been called and the value of a is " << a << endl;
}

void func(int a)//This function will take priority over the function declared under the template since it has been specialised for the int datatype 
{
    cout << "The normal function has been called and the value of a is " << a << endl;
}

int main()
{
    func(3);
    func("hello");
    return 0;
}