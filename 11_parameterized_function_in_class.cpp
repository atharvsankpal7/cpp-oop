#include <iostream>
#include <math.h>
using namespace std;
class point
{
    int x, y;
    // point(point, point);

public:
    void setdata(int a, int b)
    {
        x = a;
        y = b;
    }
    friend void distance(point o1, point o2);
};
void distance(point o1, point o2)
{
    float dist, distsq;
    distsq = ((o1.x * o1.x) - (o2.x * o2.x)) + ((o1.y * o1.y) - (o2.y * o2.y));
    dist = sqrt(distsq);
    cout << "The distance between these two points is " << dist << endl;
}
int main()
{
    point p1, p2;
    p1.setdata(5, 2);
    p2.setdata(3, 1);
    distance(p1, p2);
    return 0;
}
