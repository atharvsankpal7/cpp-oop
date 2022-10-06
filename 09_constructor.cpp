#include <iostream>
using namespace std;
class complex
{
    int x, y;

public:
    complex()
    {
        x = 10;
        y = 15;
        cout << "This is a magic of constructor!!!!\n";
    }
    void print()
    {
        cout << x << " + " << y << "i" << endl;
    }
};

int main()
{
    complex v, v1, v2, v3, v4, v5, v6;
    v.print();
    v1.print();
    v2.print();
    v3.print();
    v4.print();
    v5.print();
    v6.print();
    return 0;
}