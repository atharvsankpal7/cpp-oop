#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    int size;
    T *arr;
    vector(int a)
    {
        size = a;
        arr = new T[size];
    }
    T dotproduct(vector v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<int> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;

    vector<int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 2;
    v2.arr[2] = 4;

    cout << "The dotproduct of these two vectors is -->" << v2.dotproduct(v1) << endl;

    vector<float> v3(4);
    v3.arr[0] = 1.1;
    v3.arr[1] = 1.2;
    v3.arr[2] = 1.3;
    v3.arr[3] = 1.4;

    vector<float> v4(4);
    v4.arr[0] = 2.1;
    v4.arr[1] = 2.2;
    v4.arr[2] = 2.3;
    v4.arr[3] = 2.4;

    cout << "The dotproduct of these two vectors is -->" << v3.dotproduct(v4) << endl;
    return 0;
}