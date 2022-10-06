#include <iostream>
using namespace std;

class base_class
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void getdata()
    {
        cout << a << endl
             << b << endl;
    }
};

int main()
{
    base_class b1, b2;
    b1.setdata(3, 4);
    b1.getdata();

    cout << endl;
    base_class *q = &b2;
    q->setdata(133, 963);
    q->getdata();
    cout << endl;

    base_class *ptr = new base_class[4];
    (*ptr).setdata(33, 66);
    (*ptr).getdata();
    cout << endl;

    ptr++;
    ptr->setdata(5, 22);
    ptr->getdata();
    cout << endl;

    ptr++;
    ptr->setdata(2, 1);
    ptr->getdata();
    return 0;
}