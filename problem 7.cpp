///Write a C++ program to find out cube and square of a number using multiple inheritance.

#include<bits/stdc++.h>
using namespace std;

class square
{
public:
    int a=3;
    square()
    {
        a=a*a;
        cout << "Square is: " << a << endl;
    }
};

class cube
{
public:
    int a=3;
    cube()
    {
        a=a*a*a;
        cout << "Cube is: " << a << endl;
    }
};

class number : public square , public cube
{

};

int main()
{
    number obj;
}
