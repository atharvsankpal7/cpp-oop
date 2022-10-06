#include <iostream>
using namespace std;

class student
{
protected:
    int roll;
    void showroll()
    {
        cout << "The roll number of the student is " << roll << endl;
    }

public:
    void setroll(int a)
    {
        roll = a;
    }
};

class theory : virtual public student
{
protected:
    int maths, cp, bet;
    void showtheory()
    {
        cout << "The marks obtained by the student with roll number " << roll << " in maths is " << maths << " in computer programming is " << cp << " and in basic electronics engineering is " << bet << endl;
    }

public:
    void settheory(int a, int b, int c)
    {
        maths = a;
        cp = b;
        bet = c;
    }
};

class lab : virtual public student
{
protected:
    int betlab;
    void showlab()
    {
        cout << "The marks obtained by the student with roll number " << roll << " in basic electronic laboratory is " << betlab << endl;
    }

public:
    void setlab(int a)
    {
        betlab = a;
    }
};

class result : public theory, public lab
{
    int total;

public:
    void showresult()
    {
        // showroll();
        // showtheory();
        // showlab();
        total = cp + maths + bet + betlab;
        cout << "The total marks obtained by the student with roll number " << roll << " is " << total << endl;
    }
};

int main()
{
    result r1;
    r1.setroll(840);
    r1.settheory(84, 87, 79);
    r1.setlab(45);
    r1.showresult();

    return 0;
}