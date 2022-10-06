#include <iostream>
using namespace std;

template <class t>
class base
{
    t data;

public:
    base(t a)
    {
        data = a;
    }
    void display();
};

template <class t>
void base<t>::display()
{
    cout << data << endl;
}

int main()
{
    base <int>b1(3);
    b1.display();
    base <double>b2(33.3554);
    b2.display();
    base <string>b3("hello world!");
    b3.display();
    

    return 0;
}