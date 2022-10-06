#include <iostream>
using namespace std;
int fact(int a);

int main()
{
    int a;
    cout << "Enter the number whose factorial has to be found -->";
    cin >> a;
    cout << "The factorial of the " << a << " is " << fact(a);
    return 0;
}
int fact(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    elsew
    {
        return a * fact(a - 1);
    }
}