///2. Create a class Person which has name (char*) and age (int).
///i. Using this class define two subclasses Student and Professor.
///Student subclass displays the name and CGPA(float) and Professor subclass displays the name and number of publications (int).
///ii. Display the data of one student and one professor.

#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    void display()
    {
        cout << "Name is: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student: public Person
{
public:
    float CGPA;
    void show()
    {
        cout << "CGPA: " << CGPA << endl;
    }
};

class Professor: public  Person
{
public:
    int publications;
    void show()
    {
        cout << "Number of publcations: " << publications << endl;
    }
};

int main()
{
    Student obj;
    cout << "Information of Student: " << endl;
    obj.name = "Imran";
    obj.age = 19;
    obj.CGPA = 3.78;
    obj.display();
    obj.show();

    Professor obj2;
    cout << "\n\nInformation of a Professor: " << endl;
    obj2.name = "Mahin";
    obj2.age = 45;
    obj2.publications = 10;
    obj2.display();
    obj2.show();

    return 0;
}



