#include <iostream>
#include <math.h>
using namespace std;

class calci
{
protected:
    int a1, b1;

public:
    void intake1()
    {
        cout << "Enter the two numbers for arithmetic operations -->" << endl;
        cin >> a1 >> b1;
    }
    void outputcalci()
    {
        cout << "The addition of these two numbers is " << a1 + b1 << endl;
        cout << "The subtraction of these two numbers is " << a1 - b1 << endl;
        cout << "The multiplication of these two numbers is " << a1 * b1 << endl;
        cout << "The division of these two numbers is " << float(a1) / b1 << endl;
    }
};

class scicalci
{
    int a, b;

public:
    void intake()
    {
        cout << "Enter the two numbers for scientific operations -->" << endl;
        cin >> a >> b;
    }
    void outputscicalci()
    {
        cout << "The value of sine of a is " << sin(a) << endl;
        cout << "The value of sine of b is " << sin(b) << endl;
        cout << "The value of cosine of a is " << cos(a) << endl;
        cout << "The value of cosine of b is " << cos(b) << endl;
    }
};

class hybrid : public calci, public scicalci
{
public:
    void outputboth()
    {
        outputcalci();
        outputscicalci();
    }
};

int main()
{
    hybrid h1;
    h1.intake1();
    h1.intake();
    h1.outputboth();
    return 0;
}