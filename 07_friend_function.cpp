#include <iostream>
using namespace std;
class X;
class Y;
class X
{
private:
    int datax;

public:
    void setdatax(int v1)
    {
        datax = v1; 
    }
    friend void sum(X, Y);
};
class Y
{
private:
    int datay;

public:
    void setdatay(int v2)
    {
        datay = v2;
    }
    friend void sum(X, Y);
};
void sum(X o1, Y o2)
{
    // int i=o1+o2;
    cout << "The addition of the two data is " << o1.datax + o2.datay << endl;
}
int main()
{
    X a1;
    a1.setdatax(55);
    Y a2;
    a2.setdatay(57);

    sum(a1, a2);
    return 0;
}