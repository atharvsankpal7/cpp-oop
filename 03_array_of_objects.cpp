#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    int salary;

public:
    void setid(int x)
    {
        salary = 1200;
        cout << "Enter the id of employee " << x << " -->";
        cin >w> id;
    }
    void getid()
    {
        cout << "The id of employee is " << id << " with salary " << salary << endl;
    }
};

int main()
{
    employee com[4];
    for (int a = 0; a < 4; a++)
    {
        com[a].setid(a + 1);
        com[a].getid();
    }
    return 0;
}