#include <iostream>
using namespace std;

class base_class
{
    int a;

public:
    void setdata(int a)
    {
        this->a = a;//The local variable is given priority but using this operator determine the variable of class
    }
    void getdata()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    base_class b1;
    b1.setdata(33);
    b1.getdata();
    return 0;
}