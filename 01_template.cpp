#include <iostream>
using namespace std;

template <class T>
void show(T a)
{
    cout << a << endl;
}

int main()
{
    show(3);
    show(33.3);
    show('d');
    show("hello");
    return 0;
}