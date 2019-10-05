/**

author:	©LoneWolfDON

**/
/*
4. Create a class called Student1 and a class called Student2 each containing, as a private
variable, the grade of the students. High_CGPA (), which is a friend function of both the
Student1 and Student2 classes. This function returns positive if the Student1 has higher
cgpa than Student2, if same then 0, and negative if Student2 has higher cgpa than Student1.

i. User will input grades for both Student1 and Student2 members
ii. Print return value of High_CGPA () for (i) scenario.
*/
#include<bits/stdc++.h>
using namespace std;

class student1
{
    float grades1;
public:
    friend int High_CGPA();


};
class student2
{
    float grades2;
public:
    friend int High_CGPA();

};

int High_CGPA()
{
    student1 stu1;
    student2 stu2;

    cout<<"Input Student1 grade : ";
    cin>>stu1.grades1;
    cout<<"Input Student2 grade : ";
    cin>>stu2.grades2;

    if(stu1.grades1>stu2.grades2)
    {
        return 1;
    }
    else if(stu1.grades1<stu2.grades2)
    {
        return -1;
    }
    else
   {
         return 0;
    }

}

int main()
{
    int revalue;
    revalue = High_CGPA();

    cout<<"\nReturn Value of High_CGPA() is : "<<revalue<<endl;
}
