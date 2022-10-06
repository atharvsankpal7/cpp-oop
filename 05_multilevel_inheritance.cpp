#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void setdata1(int a)
    {
        base1int = a;
    }
    void showdata1()
    {
        cout << "The value of base1int is " << base1int << endl;
    }
};

class base2
{
protected:
    int base2int;

public:
    void setdata2(int a)
    {
        base2int = a;
    }
    void showdata2()
    {
        cout << "The data of base2int is " << base2int << endl;
    }
};

class derived : public base1, public base2
{
public:
    void showdataderived()
    {
        cout << "The data of base1int is " << base1int << endl;
        cout << "The data of base2int is " << base2int << endl;
        cout << "The addition of the data1int and data2int is " << base1int + base2int << endl;
    }
};

int main()
{
    derived a;
    a.setdata1(55);
    a.setdata2(33);
    a.showdata1();
    a.showdata2();
    a.showdataderived();
    return 0;
}