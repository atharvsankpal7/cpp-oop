#include <iostream>
using namespace std;
class a;
class b
{
    int datab;
    friend void swap(a &, b &);

public:
    void setdatab(int v2)
    {
        datab = v2;
    }
    void printb(void);
};
class a
{
    int dataa;
    friend void swap(a &, b &);

public:
    void setdata(int v1)
    {
        dataa = v1;
    }
    void printa(void);
};
void swap(a &o1, b &o2)
{
    int temp;
    temp = o1.dataa;
    o1.dataa = o2.datab;
    o2.datab = temp;
}
void a::printa(void)
{
    cout << "The value of dataa is " << dataa << endl;
}
void b::printb(void)
{
    cout << "The value of datab is " << datab << endl;
}
int main()
{
    a x1;
    b y1;
  
    x1.setdata(55);
    y1.setdatab(69);

    cout << "Before swapping :" << endl;
    x1.printa();
    y1.printb();

    swap(x1, y1);
    
    cout << "After swapping :" << endl;
    x1.printa();
    y1.printb();
 
    return 0;
}