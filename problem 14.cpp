///Make a class named Fruit with a data member to calculate the number of fruits in a basket.
///Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in
///the basket. Print the number of fruits of each type and the total number of fruits in the basket.

#include<bits/stdc++.h>
using namespace std;

class Apple
{
public:
    int a=100;
    Apple()
    {
        cout << "Number of Apple is: " << a << endl;
    }
};

class Mango
{
public:
    int m=150;
    Mango()
    {
        cout << "Number of Mango is: " << m << endl;
    }
};

class fruit : public Apple , public Mango
{
public:
    fruit()
    {
        cout << "Total fruit is: " << a+m << endl;
    }
};

int main()
{
    fruit obj;
}

