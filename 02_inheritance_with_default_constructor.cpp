#include <iostream>
using namespace std;

class employee
{
    int salary = 100;

public:
    employee(int a) // This constructor is used by only the objects of class employee with the argument.
    {
        salary = a;
        cout << "The salary of the employee is " << salary << endl;
    }
    employee()
    {
        cout << "The default constructor of class employee has been invoked\n";
    } // This is a defalt constructor which is used by the object of class programmer on declaration
    ~employee()
    {
        cout << "The destructor of class employee has been invoked\n";
    }
};

class progammer : public employee // after the declaration of object of class progammer the default constructor of employee will be called  .
{
public:
    progammer()
    {
        cout << "This employee is programmer\n";
    }
    progammer(int b)
    {
        cout << "The programmer have id " << b << endl;
    }
    ~progammer()
    {
        cout << "The destructor of class programmer has been invoked\n";
    }
};

int main()
{
   // employee e1(20);
    progammer p1, p2(20);

    return 0;
}