///7. Create a class name Base with a function name show that prints "This is parent class" and
///a subclass name Child with a function name show that prints "This is child class".
///i. Execute Base class’s show using Base type pointer
///ii. Execute Child class’s show using Base type pointer

#include<bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "This is parent class." << endl;
    }
};

class Child : public Base
{
public:
    void show()
    {
        cout << "This is child class." << endl;
    }
};

int main()
{
    Base *base;
    Child child;
    base = &child;
    base->show();
}
