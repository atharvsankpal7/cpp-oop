#include <iostream>
using namespace std;

class simple
{
    int data1, data2, data3, data4;

public:
    simple(int a = 0, int b = 0, int c = 0, int d = 0)
    {
        data1 = a;
        data4 = d;
        data3 = c;
        data2 = b;
    }
    void print()
    {
        cout << "The value of data1, data2, data3 and data4 is-->" << data1 << ", " << data2 << ", " << data3 << " and " << data4 << endl;
        // cout << "The value of data2 is -->" << data2 << endl;
        // cout << "The value of data3 is -->" << data3 << endl;
        // cout << "The value of data4 is -->" << data4 << endl;
    }
};
int main()
{
    simple p1(1, 2, 3, 4), p2(1, 2, 3), p3(1, 2), p4(1), p5;
    p1.print();
    p2.print();
    p3.print();
    p4.print();
    return 0;
}