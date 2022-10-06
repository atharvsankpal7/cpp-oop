#include <iostream>
using namespace std;
class xd
{
    int a;

public:
    xd(int i)
    {
        a = i;
        cout << "The constructor for the object " << a << " has been called\n";
    }
    ~xd()
    {

        cout << "The destructor for the object " << a << " has been called\n";
    }
};
int main()
{
    xd o1(1);
    {
        xd o2(2);
        xd o3(3);
    }
    return 0;
}