///Write a C++ code to change value of member variable of a class using constant member function.

#include<bits/stdc++.h>
using namespace std;

class changevalue
{
public:
    int value=10;

    changevalue(int n)
    {
        value=n;
    }

    int returnvalue() const
    {
        return value;
    }
};

int main()
{
    changevalue obj(20);
    cout << obj.returnvalue();
    return 0;
}

