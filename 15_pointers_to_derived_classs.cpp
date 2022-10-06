#include <iostream>
using namespace std;

class base
{
public:
    int var_base;
    void display()
    {
        cout << "The value of the var_base is " << var_base << endl;
    }
};

class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "The value of the var_derived is " << var_derived << endl;
    }
};

int main()
{
    base *base_pointer;
    derived *derived_pointer;
    derived derived_obj1, derived_obj2;

    base_pointer = &derived_obj1;
    base_pointer->var_base = 69;
    base_pointer->display();

    derived_pointer = &derived_obj2;
    derived_pointer->var_base = 66;
    derived_pointer->var_derived = 55;
    derived_pointer->display();

    derived_obj2.display();
    cout << "The value of var_base for derived_obj2 is " << derived_obj2.var_base << endl;
    return 0;
}