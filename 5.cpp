/**

author:	©LoneWolfDON

**/
/*
5.Let a class has name 'Rectangle' with a function named 'Area' which returns area. Length
and breadth are passed as parameters to its constructor.
i. Print the area of two rectangles having sides (4, 5) and (5, 8) respectively using
parameterized constructor

ii. Redo (i) but do not use parameterized constructor.
*/
#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    int length, breadth;

    Rectangle(int s1, int s2)
    {
        length = s1;
        breadth = s2;
    }
    int Area ()
    {
        return length*breadth;
    }
    Rectangle()
    {

    }
    int Area(int length, int breadth)
    {
     return length*breadth;
    }
};

int main()
{
    Rectangle R1(4,5), R2(5,8);

    cout<<"using parameterized constructor :"<<endl;
    cout<<"Area of Rectangle 1 is : "<<R1.Area()<<endl;
    cout<<"Area of Rectangle 2 is : "<<R2.Area()<<endl;

    cout<<endl;

    Rectangle R3, R4;

    cout<<"using non-parameterized constructor :"<<endl;
    cout<<"Area of Rectangle 1 is : "<<R3.Area(4,5)<<endl;;
    cout<<"Area of Rectangle 2 is : "<<R4.Area(5,8)<<endl;;
}
