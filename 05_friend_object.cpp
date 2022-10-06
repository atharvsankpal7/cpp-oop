#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void getdata()
    {
        cout << a << " + " << b << "i" << endl;
    }
    friend complex sumxd(complex o1, complex o2);
};
complex sumxd(complex o1, complex o2)
{
    complex o3;
    o3.a = o1.a + o2.a;
    o3.b = o1.b + o2.b;
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setdata(4, 2);
    c1.getdata();

    c2.setdata(6, 1);
    c2.getdata();

    sum = sumxd(c1, c2);
    sum.getdata();

    return 0;
}