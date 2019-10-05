///Write a C++ code to print out cgpa of students from gpa using friend function.

#include<bits/stdc++.h>
using namespace std;

class gpa
{
public:
    double OOP, DLD, DS,avg=0;
    friend void cgpa();
};

void cgpa()
{
    gpa obj;
    obj.OOP=4;
    obj.DLD=3.75;
    obj.DS=4;
    obj.avg = (obj.OOP + obj.DLD + obj.DS) / 3;
    cout << "CGPA is: " << obj.avg << endl;
}

int main()
{
    cgpa();

    return 0;
}
