#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter the id of employee :\n";
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "The id of employee with count " << count << " is " << id << endl;
    }
    void counter();
};
int employee ::count = 100;
void employee ::counter()
{
    cout << "The value of counter is " << count << endl;
}
int main()
{
    employee papa, aai, arpita;

    aai.setdata();
    aai.getdata();
    // cout<<"The value of counter is -->"<<aai.count<<endl;
    aai.counter();

    arpita.setdata();
    arpita.counter();
    arpita.getdata();
    // cout<<"The value of counter is -->"<<arpita.count<<endl; <-- this do not work since the count variable is private.

    papa.setdata();
    papa.getdata();
    // cout<<"The value of counter is -->"<<papa.count<<endl;
    papa.counter();

    return 0;
}