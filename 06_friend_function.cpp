#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int sumreal(complex, complex);
    int sumimg(complex, complex);
};
class complex
{
private:
    int a, b;

public:
    friend int calculator ::sumreal(complex, complex);
    friend int calculator ::sumimg(complex, complex);
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << a << " + " << b << "i" << endl;
    }
};
int calculator ::sumreal(complex o1, complex o2)
{
    return o1.a + o2.a;
}
int calculator ::sumimg(complex o1, complex o2)
{
    return o1.b + o2.b;
}

int main()
{
    complex c1, c2;
    calculator s1;
    c1.setdata(1, 3);
    c1.print();

    c2.setdata(6, 33);
    c2.print();

    //  s1.sumreal(c1, c2);
    cout << "The addition of these two numbers real part is " << s1.sumreal(c1, c2) << endl;
    cout << "The addition of these two numbers imaginary part is " << s1.sumimg(c1, c2) << endl;
    return 0;
}