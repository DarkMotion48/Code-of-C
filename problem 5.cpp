///Write a C++ program that will add any two numbers using function over loading technique.

#include<bits/stdc++.h>
using namespace std;

class summation
{
public:
    summation()
    {

    }

    int add(int a,int b)
    {
        cout << "Summation of the given numbers: "<< a+b;
    }

    double add(double a, double b)
    {
        cout << "Summation of the given numbers: "<< a+b;
    }
};

int main()
{
    double a,b;
    cout << "Enter two number to add: ";
    cin >> a >> b;
    summation obj;
    obj.add(a,b);
    return 0;
}
