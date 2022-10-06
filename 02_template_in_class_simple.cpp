#include <iostream>
using namespace std;

template <class T>
class base
{
    T a;

public:
    base(T i)
    {
        a = i;
    }
    void display()
    {
        cout << a << endl;
    }
};

int main()
{
    // base<int> b1.("hello world!"); // This will not work since the declared datatype and datatype inside the arguments are different
    base<int> b1(33);
    b1.display();

    base<float> b2(33.33);
    b2.display();

    base<char> b3('c');
    b3.display();

    base<string> b4("Hello world!");
    b4.display();
    return 0;
}