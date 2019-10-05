///Write a C++ program that will show the absolute value of a given number using function over loading technique.

#include<bits/stdc++.h>
using namespace std;

class absolutevalue
{
public:
    absolutevalue()
    {

    }

    int check(int a)
    {
        if(a<0)
            a=-a;
        return a;
    }

    double check(double a)
    {
        if(a<0.0)
            a=-a;
        return a;
    }
};

int main()
{
    double n;
    cout << "Enter a Number: ";
    cin >> n;
    absolutevalue obj;
    cout << "Absolute Number is: " << obj.check(n) << endl;
    return 0;
}
