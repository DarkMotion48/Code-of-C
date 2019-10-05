///Write a C++ program where a parent class provides an interface to the base class to implement a pure virtual function
///called getArea(), to find the area of Rectangle and Triangle for width = 5 and height = 7

#include<bits/stdc++.h>
using namespace std;

class Base
{
    int a,b;
public:
    virtual void getArea(int w,int h)=0;
};

class Rectangle: public Base
{
public:
    void getArea(int w,int h)
    {
        cout << "Area of the Rectangle: " << h*w << endl;
    }
};

class Triangle: public Base
{
public:
    void getArea(int w,int h)
    {
        cout << "Area of the Triangle: " << (h*w)/2 << endl;
    }
};

int main()
{
    Base *ob,*obj3;
    Rectangle obj;
    ob=&obj;
    ob->getArea(7,5);

    Triangle obj2;
    obj3=&obj2;
    obj3->getArea(7,5);
}

