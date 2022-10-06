#include <iostream>
using namespace std;

class base
{
protected:
    int data_base;

public:
    virtual void display()//-->using the virtual keyword will allow the pointer of the base class to get overruled by function of same name as in base class presemt inthe derived class
    // void display()
    {
        cout << "display function of base class invoked\n";
    }
};

class derived : public base
{
public:
    void display()
    {
        cout << "display function of derived class invoked\n";
    }
};

int main()
{
    base *base_pointer;
    derived obj;
    base_pointer = &obj;
    base_pointer->display();
    return 0;
}