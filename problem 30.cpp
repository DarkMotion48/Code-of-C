/**

author:	©LoneWolfDON

**/
/*
30. Let, you have to divide two number, given by user. But divisor must be less than
dividend. If not then consider it as error and handle it.
*/
#include<bits/stdc++.h>
using namespace std;

class numbers
{
    public:
        int dividend,divisor;
};

int main()
{
    numbers ob1;

    cin>>ob1.dividend>>ob1.divisor;
    try
    {
        if(ob1.dividend < ob1.divisor)
        {
            throw 'e';
        }
        else
        {
            cout<<(float)ob1.dividend/ob1.divisor<<endl;
        }

    }
    catch (char s)
    {
        cout<<"Error : Divisor must be less then Dividend"<<endl;
    }
}
