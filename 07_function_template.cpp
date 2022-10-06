#include <iostream>
using namespace std;

template <class t1, class t2>
float avgfunc(t1 a, t2 b)
{
    return (a + b) / float(2);
}

int main()
{
    cout << avgfunc(6.3, 5.12) << endl;
    printf("The average of these two numbers is %.3f\n", avgfunc(1, 3.3));
    // printf("%.3f", 22 / 7.0);
    return 0;
}