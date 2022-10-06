#include <iostream>
using namespace std;

class employee
{
    int salary = 47;

public:
    employee()
    {
        cout << "The salary of this employee is " << salary << endl;
    }
};
/*This is the syntax of the inheritance of the classes

{{class}} {{derived_class_name}} : {{visibility}} {{base_class_name}}
{
    code
}:

"by default the visibility is private."
"You can not inherite the private members of the base class."
*/
class programmer : public employee
{
public:
    programmer()
    {
        cout << "The employee is a programmer " << endl;
    }
};
int main()
{
    employee e1;
    programmer p1;

    return 0;
}

