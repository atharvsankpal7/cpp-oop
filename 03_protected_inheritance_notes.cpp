#include <iostream>
using namespace std;

class base_class
{
private:
    int a;
    // The private memebers cannot be inherited to inherited 

protected:
    int b;
//The protected members be inherited but they are not accesseable to the any-other outsider function.
public:
    int c;
    base_class() {}
};

class derived1 : public base_class
{
    // In this case the public members of the base class are made public members of the derived1 class
    // Protected members of the base class are made protected members of the class derived1
};

class derived2 : private base_class
{
    // In this case the public members of the base class are made private members of the derived2 class
    // Protected members of the base class are made private members of the class derived2
};

class derived3 : protected base_class
{
    // In this case the public members of the base class are made protected members of the derived3 class
    // Protected members of the base class are made protected members of the derived3 class
};

int main()
{
    base_class p2;
    p2.c = 10;
    // p2.b;
    // This will not work since the protected members are similar to the private members the only difference is the protected memebers can be inherted
    return 0;
}