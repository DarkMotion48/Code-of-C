///Write a C++ code to print out features of Toyota and Corolla along with features of car and vehicle implementing hybrid inheritance.

#include<bits/stdc++.h>
using namespace std;

class toyota
{
public:
    toyota()
    {
        cout << "Toyota is a type of Car." << endl;
    }
};

class corolla
{
public:
    corolla()
    {
        cout << "Corolla is a type of Car. " << endl;
    }
};

class car : public toyota, public corolla
{
public:
    car()
    {
        cout << "Car is a type of Vehicle." << endl;
    }
};

class vehicle : public car
{

};

int main()
{
    vehicle obj;
}
