///Let there are 4 classes named A, B, C and D. B and C both are children of class A and parent of class D.
///A has a member named id. i. Print out value of id given by user
///ii. B, C and D all have methods named as same showh(). Execute showh() for B,C and D.

#include<bits/stdc++.h>
using namespace std;

class A
{
    int id;
public:
    void show(int i)
    {
        id=i;
        cout << "My ID: " << id << endl;
    }
};

class B : public A
{
public:
    void showh()
    {
        cout << "I am from B." << endl;
    }
};

class C: public A
{
public:
    void showh()
    {
        cout << "I am from C." << endl;
    }
};

class D : public B, public C
{
public:
    void showh()
    {
        cout << "I am from D." << endl;
    }
};

int main()
{
    int id;
    cin >> id;
    A obj;
    obj.show(id);
    B obj3;
    obj3.showh();
    C obj2;
    obj2.showh();
    D obj1;
    obj1.showh();
}
