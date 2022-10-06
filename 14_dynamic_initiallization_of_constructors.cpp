#include <iostream>
using namespace std;
class compoundinterest
{
    double interest, principle, year, rate, totalam;

public:
    /*
    In this case the initialization of constructors is done in run time .
    The datatype of r is used for the initilization of the perticular object .
    The parameters passed to the object of this class while initialising object is used for invoking the constructor
      */
    compoundinterest(double p, double y, double r)
    {
        principle = p;
        year = y;
        rate = r;

        for (int i = 1; i <= year; i++)
        {
            p *= (1 + rate);
        }

        cout << "The return on your investment will be -->" << p << endl;
    }
    compoundinterest(double p, double y, int r)
    {
        principle = p;
        year = y;
        rate = float(r) / 100;
        totalam = principle;
        for (int i = 1; i <= year; i++)
        {
            totalam = totalam * (1 + rate);
        }

        cout << "The return on your investment will be -->" << totalam << endl;
    }
};

int main()
{
    double a, b, d, f, e;
    int c;
    cout << "Enter the principle, amount of time and rate in yearly factor-->\n";
    cin >> a >> b >> c;

    compoundinterest c1(a, b, c);

    cout << "Enter the principle, amount of time and rate in percentage-->\n";
    cin >> f >> e >> d;
    compoundinterest c2(f, e, d);
    return 0;
}