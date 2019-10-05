/**

author:	©LoneWolfDON

**/
/*
16. Write a C++ program to use unary increment (++) and decrement (--) operator as cin and
cout method
*/
#include<bits/stdc++.h>
using namespace std;

class opoverloading
{
public:
    int a;
    void operator++()
    {
        cin>>a;

    }
    void operator--()
    {
        cout<<a;
    }
};

int main()
{
    opoverloading op1;
    ++op1;
    --op1;
}
