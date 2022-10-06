#include <iostream>
using namespace std;

class student
{
protected:
    int roll;
    int physics;
    int maths;

public:
    void getroll(int a)
    {
        roll = a;
    }
    void displayroll()
    {
        cout << "The roll no of this student is " << roll << endl;
    }
};

class marks : public student
{
public:
    void getmarks(int a, int b)
    {
        maths = a;
        physics = b;
    }
};

class result : public marks
{
public:
   void displayresult()
    {
        cout << "The marks in maths of the student " << roll << " are " << maths << endl;
        cout << "The marks in physics of the student " << roll << " are " << physics << endl;
    }
};

int main()
{
    result r1;
    r1.getroll(55);
    r1.displayroll();
    r1.getmarks(89,79);
    r1.displayresult();
    return 0;
}