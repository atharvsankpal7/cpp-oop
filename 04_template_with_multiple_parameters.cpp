#include <iostream>
using namespace std;

template <class T1, class T2>
class base
{
    T1 data1;
    T2 data2;

public:
    base(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "The value of data1 is " << data1 << endl;
        cout << "The value of data2 is " << data2 << endl;
    }
};

int main()
{
    base<int, char> b1(65, 'd');
    b1.display();

    cout << endl;

    base<float, string> b2(65.33, "hello world");
    b2.display();
    return 0;
}