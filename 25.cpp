/**

author:	©LoneWolfDON

**/
/*
25.Let a class has id, name and gpa as member variable. Write a C++ code to change gpa using
constant object.
*/
#include<bits/stdc++.h>
using namespace std;

class stu
{
public:
    int id=1107048;
    string name="Md. Imran Hossain Emu";
    mutable double gpa=3.78;
    void shownameid() const;
    void unchangedgpa() const;
    void changedgpa() const ;
};
 void stu :: shownameid() const
    {
        cout<<"ID: "<<id<<"\n"<<"Name: "<<name<<endl;
    }

    void stu :: unchangedgpa() const
    {
        cout<<"Unchanged CGPA : "<<gpa<<endl;
    }
    void stu :: changedgpa() const
    {
        gpa=3.7;
        cout<<"Changed CGPA : "<<gpa<<endl;
    }
int main()
{
    const stu obj;
    obj.shownameid();
    obj.unchangedgpa();
    obj.changedgpa();
}
