///Let a class is Student. i. User will input name and id. If no name is passed then the name should be "Unknown",
///otherwise the name should be equal to the String value passed while creating the object of the Student class.
///ii. Print name and id of 5 students.

#include<bits/stdc++.h>
using namespace std;

class student
{
public:
    student()
    {
        cout << "Unknown" << endl;
    }

    student(string str, int id)
    {
        cout << "Name: " << str << "  Id is: " << id << endl;
    }
};

int main()
{
    student obj("Mahin",1107031);
    student obj2;
    student obj3("Imran",1107048);
    student obj4("Hridoy",1107040);
    student obj5;
    return 0;
}
