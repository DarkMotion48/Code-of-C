/**

author:	©LoneWolfDON

**/
/*
28.Let a class has two method which modify employee’s salary and counting experience.
Write a C++ program to find out one specific employee’s incremented salary and
experience after a certain period in one go.
*/
#include<bits/stdc++.h>
using namespace std;

 class employee
 {
 public:
    int salary,exp;
     employee& getsalary(int x)
     {
         this->salary = x;
         return *this;
     }
     employee& getexp(int y)
     {
         this->exp=y;
         return *this;
     }
     void display()
     {
         cout << "Salary: " << salary << endl;
         cout << "Experience: " << exp << " Years." << endl;
     }
 };

int main()
{
    employee emp1;
    emp1.getsalary(13500).getexp(3);
    emp1.display();
}

