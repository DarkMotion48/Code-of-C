/**

author:	©LoneWolfDON

**/
/*
29. Let each student have to create their own object from Student class. Student class has
many members like id, name, and initializer and so on.
i. Print out information of a group of students while value of initializer must be
initialed once.
ii. Print out name of university using a method while no student is present.
iii. A class member name varsity address must be printed, whether there is any
student or not
*/
#include<bits/stdc++.h>
using namespace std;

class student
{
public:
    int id;
    string stuname, stuaddress;

    void showinfo(int id, string stuname, string stuaddress)
    {
        cout<<"\nStudent Information : "<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"Name : "<<stuname<<endl;
        cout<<"Address : "<<stuaddress<<endl;
    }
    void varname()
    {
        cout<<"Varsity Name : BAIUST"<<endl;
    }
    void varsityaddress()
    {
        cout<<"Varsity Address: Cumilla Cantonment, Cumilla"<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    static int initializer =10;
    if(n==0)
    {
        student sn;
        sn.varname();
        sn.varsityaddress();
    }
    else
    {
          student s1[n];
          for(int i=0;i<n;i++)
          {
              cout<<"Enter ID, Name and Address :"<<endl;

              cin>>s1[i].id>>s1[i].stuname>>s1[i].stuaddress;
          }
          for(int i=0;i<n;i++)
          {
            cout<<"Initializer : "<<initializer<<endl;
              s1[i].showinfo(s1[i].id,s1[i].stuname,s1[i].stuaddress);
              s1[i].varname();
              s1[i].varsityaddress();
          }
    }
}
