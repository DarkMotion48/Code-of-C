///Write a C++ code to change value of member variable of a class using constant member function.
#include<bits/stdc++.h>
using namespace std;

class memberfunction
{
public:
    mutable int value=0;

    void setvalue(int givenvalue) const
    {
        value = givenvalue;
    }

    int getvalue() const
    {
        value = 7;
        return value;
    }
};

int main()
{
    const memberfunction obj;
    obj.setvalue(10);
    cout << obj.getvalue();
}
