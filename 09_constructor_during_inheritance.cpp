#include <iostream>
using namespace std;

class base1
{
protected:
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "The constructor of class base1 has been called\n";
    }
    // void dataoutput()
    // {
    //     cout<<"The dat"
    // }
};

class base2
{
protected:
    int data2;

public:
    base2(int b)
    {
        data2 = b;
        cout << "The constructor of class base2 has been called\n";
    }
};

class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int p, int q, int r, int s) : base1(p), base2(q)
    {
        derived1 = r;
        derived2 = s;
        cout << "The constructor of derived class has been called\n";
    }
    void display()
    {
        cout << "The value of data1 is " << data1 << endl;
        cout << "The value of data2 is " << data2 << endl;
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    derived d1(1, 2, 3, 4);
    d1.display();
    return 0;
}