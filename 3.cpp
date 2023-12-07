#include <iostream>
#include <math.h>
using namespace std;
class simpleCalculator
{
public:
    int utility(int a, int b)
    {
        int sum = a + b;
        int multiplication = a * b;
        float division = a / b;
        int sub = a - b;

        cout << "the sum is " << sum << " the multipication is " << multiplication << " the divion is " << division << " the sub is " << sub << endl;
        return 0;
    }
};

class scientificCalculator
{
public:
    int utility2(int a)
    {
        float area = 3.14 * a * a;
        cout << "the sum is " << area << endl;
        return 0;
    }
};
class hybrid : public simpleCalculator, public scientificCalculator
{
    void display(void)
    {
        cout << "hybrid class created" << endl;
    }
};

int main()
{
    hybrid o1;
    o1.utility(8, 2);
    o1.utility2(1);

    return 0;
}
