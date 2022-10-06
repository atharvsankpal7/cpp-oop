#include <iostream>
using namespace std;

template <class t1 = int, class t2 = float, class t3 = char>
class myclass
{
    t1 a;
    t2 b;
    t3 c;

public:
    myclass(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void diplay()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main()
{
    myclass<> m1(3, 3.6, 'c');
    m1.diplay();
    
    cout << endl;
    
    myclass<int, int, int> m2(3, 2, 1);
    m2.diplay();
    return 0;
}