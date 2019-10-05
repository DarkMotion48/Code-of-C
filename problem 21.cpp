///Write a C++ program that will add any two numbers using function over loading technique.

#include<bits/stdc++.h>
using namespace std;

class summation
{

public:
    void add(int a,int b)
    {
        cout << "Summation of the given numbers: "<< a+b << endl;
    }

    void add(double a, double b)
    {
        cout << "Summation of the given numbers: "<< a+b << endl;
    }
};

int main()
{
    summation obj;
    obj.add(10,20);
    obj.add(10.10,20.10);
    return 0;
}

