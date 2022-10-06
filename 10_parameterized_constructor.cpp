#include <iostream>
using namespace std;
class complex
{
    int x, y;

public:
    complex(int, int);
    void print()
    {
        cout << x << " + " << y << "i" << endl;
    }
};
complex::complex(int a, int b)
{
    x = a;
    y = b;
}

int main()
{
    complex s(5, 6);
    s.print();

    complex t = complex(9, 55);
    t.print();
    return 0;
}