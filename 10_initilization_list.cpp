#include <iostream>
using namespace std;

class base_class
{
    int a;
    int b;

public:
    base_class(int x, int y) : a(x), b(y)
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
    // base(int x, int y) : b(x), a(y)
    // {
    //     cout << "The value of a is " << a << endl;
    //     cout << "The value of b is " << b << endl;
    // }
    // base(int x, int y) : a(x + y), b(x * y)
    // {
    //     cout << "The value of a is " << a << endl;
    //     cout << "The value of b is " << b << endl;
    // }
    // base(int x, int y) : a(x), b(y + a)
    // {
    //     cout << "The value of a is " << a << endl;
    //     cout << "The value of b is " << b << endl;
    // }
    // base(int x, int y) : a(x + b), b(y) // This will throwout garbage value since a is initialized first
    // {
    //     cout << "The value of a is " << a << endl;
    //     cout << "The value of b is " << b << endl;
    // }
    // base(int x, int y) : b(x), a(y + b) // This will throwout garbage value since a is initialized first
    // {
    //     cout << "The value of a is " << a << endl;
    //     cout << "The value of b is " << b << endl;
    // }
    base_class() {} // This is a default constructor and is  invoked when the object of the class base is created without passing any type of arguments.
};

int main()
{
    base_class b1(3, 4);

    return 0;
}