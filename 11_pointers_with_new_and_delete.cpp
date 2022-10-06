#include <iostream>
using namespace std;
void basic();

int main()
{
    basic();

    return 0;
}
void basic()
{
    int *p = new int(0);
    cout << *p << endl;
    float *q = new float(55.45);
    cout << *q << endl;
    int *ptr = new int[3];
    ptr[0] = 0;
    // ptr[1] = 1;
    *(ptr + 1) = 1;
    ptr[3] = 2;
    // ptr++;
    cout << *ptr << endl;
    cout << ptr[1] << endl;
    delete[] ptr;
    cout << ptr[1] << endl;
}