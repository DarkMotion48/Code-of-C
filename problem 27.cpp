/**

author:	©LoneWolfDON

**/
/*
Write a C++ program to find out cube and square of a number using inline function.
*/
#include<bits/stdc++.h>
using namespace std;

inline int square (int a)
{
    return a*a;
}

inline int cube (int a)
{
    return a*a*a;

}

int main()
{
    int a =5;

    cout<<"Square  of "<<a<<" is : "<<square(a)<<endl;

    cout<<"Cube of "<<a<<" is : "<<cube(a)<<endl;
}
