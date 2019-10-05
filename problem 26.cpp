/**

author:	©LoneWolfDON

**/
/*
26. Write a C++ code to print out cgpa of students from gpa using friend function.
*/
#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

class students
{
public:
    float CGPA;

friend void show_cgpa(float CGPA);

};

 void show_cgpa(float CGPA)
{
    cout<<"CGPA : "<< CGPA<<endl;
}


int main()
{
    students sem;
    int n;
    cout<<"Number of Semesters : ";
    cin>>n;

    float GPA[MAX],sum=0;


    for(int i=0;i<n;i++)
    {
        cin>>GPA[i];
        sum = sum + GPA[i];
    }
    sem.CGPA =  sum/n;

    show_cgpa(sem.CGPA);
}
