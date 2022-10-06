#include <iostream>
using namespace std;

template <class t1, class t2, class t3>
class base
{
    t1 data1;
    t2 data2;
    t3 data3;

public:
    base(t1 a, t2 b, t3 c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    base() {}
    void display()
    {
        cout << "The value of data1 is " << data1 << endl;
        cout << "The value of data2 is " << data2 << endl;
        cout << "The value of data3 is " << data3 << endl;
    }
};

int main()
{
    base<int, float, char> b1(33, 33.3, 'a');
    b1.display();
    return 0;
}