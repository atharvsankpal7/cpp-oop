#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "bro\n";
    }
};

class base2
{
public:
    void greet()
    {
        cout << "bhai\n";
    }
};

class derived : public base1, public base2
{
public:
    void greet()
    {
        // base1::greet();
        base2::greet();
    }
};

class D
{
public:
    void say()
    {
        cout << "Hello world!\n";
    }
};

class B : public D
{
public:
    // This function will overwrite the say function of D class.
    void say()
    {
        cout << "Hello this is nice!!\n";
    }
};

int main()
{
    derived d1;
    d1.greet();

    B b;
    b.say();

    return 0;
}