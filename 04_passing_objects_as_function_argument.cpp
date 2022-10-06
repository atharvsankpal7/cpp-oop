#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void getdata(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void print()
    {
        cout << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex a1, a2, a3;
    a1.setdata(2, 5);
    a2.setdata(1, 6);
    a1.print();
    a2.print();
    // a3.setdata(9, 8);

    a1.getdata(a1, a2);
    a1.print();
    // a2.getdata(a2, a3);

    return 0;
}