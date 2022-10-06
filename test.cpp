#include <iostream>
using namespace std;

int main()
{

    // figure this out no matter what
    int array[2];
    // array[0] = 1;
    // array[1] = 2;
    // array[2] = 3;
    // array[3] = 4;
    // array[4] = 5;
    for (int a = 0; a < 5; a++)
    {
        cin >> array[a];
    }
    for (int a = 0; a < 5; a++)
    {
        cout << array[a] << endl;
    }
   // cout << sizeof(array);
    return 0;
}