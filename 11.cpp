/**

author:	©LoneWolfDON

**/
/*
11. Print any type of number calling a method name printn() given by user.
*/
#include<bits/stdc++.h>
using namespace std;

class PrintNumber
{
public:
    void printn(int a)
    {
        cout<<a<<endl;
    }
    void printn(double a)
    {
        cout<<a<<endl;
    }
};

int main()
{
    double a;
    PrintNumber ob;
    cin>>a;
    ob.printn(a);
}
