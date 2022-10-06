#include <iostream>
#include <vector>

using namespace std;
template <class t>
void display(vector<t> v)
// void display(vector<int> &v)//passing the address will affect the changes made inside the function to the actual values of the argument that has been passed
{

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int element;
    vector<int> v1;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the element to be added in vector\n";
        cin >> element;
        v1.push_back(element);
    }
    // v1.pop_back();

    vector<int>::iterator iter = v1.begin();
    v1.insert(iter + 0, 1, 69);
    // iterator+ location, no of copies,number that has to be added
    //  above two lines of code adds the 69 number at starting of the vector v1;

    display(v1);

    return 0;
}