#include <iostream>
using namespace std;
class complex
{
    int x, y;

public:
    complex(int a, int b)
    {
        x = a;
        y = b;
    }
    complex(int a)
    {
        x = a;
        y = 0;
    }
    complex()
    {
        x = 0;
        y = 0;
    }
    void print()
    {
        cout << x << " + " << y << "i" << endl;
    }
};
int main()
{
    complex no1(2, 3), no2(66), no3;
    no1.print();
    no2.print();
    no3.print();

    return 0;
}