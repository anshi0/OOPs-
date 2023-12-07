#include <iostream>
#include <math.h>
using namespace std;
class student
{
protected:
    int ID;

public:
    void details(void)
    {
        cout << "Enter your ID" << endl;
        cin >> ID;
    }
};

class test : virtual public student
{
protected:
    float marks1;

public:
    void marks()
    {
        cout << "Marks of student are" << endl;
        cin >> marks1;
    }
};

class sports : virtual public student
{
protected:
    float number1;

public:
    void number(void)
    {
        cout << "Marks of student are" <<endl;
        cin >> number1;
    }
};

class result : public test, public sports
{
    float total = (number1 + marks1) / 2;

public:
    void display()
    {
        cout << "Result of student is " << total<< endl;
    }
};

int main()
{
    result anshi;
    anshi.details();
    anshi.marks();
    anshi.number();
    anshi.display();
}