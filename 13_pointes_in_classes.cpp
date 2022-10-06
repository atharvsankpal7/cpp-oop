#include <iostream>
using namespace std;

class shop
{
    int id;
    int price;

public:
    void setdata(int a, int b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "The price of the item with id " << id << " is " << price << endl;
    }
};

int main()
{
    shop *ptr = new shop[4];
    shop *ptr2 = ptr; // This line of code copies the address of ptr into ptr2
    int p, q;
    for (int i = 0; i < 4; i++)
    {
        cout << "Please enter the id and price of the item\n";
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        ptr2->getdata();
        ptr2++;
    }
    return 0;
}
