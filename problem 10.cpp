///Suppose you have a Piggie Bank class with an initial amount of $50 as Initial_amount.
///i. Add 10 dollar while creating object of Piggie Bank class
///ii. Add 20 dollar using member function
///iii. Add 30 dollar using non member function
///iv. Print out the total amount

#include<bits/stdc++.h>
using namespace std;

class piggiebank
{
public:
    int amount = 50;

    piggiebank(int i)
    {
        amount = amount + i;
    }

    void addamount(int j)
    {
        amount = amount + j;
    }
};

void nonmember(class piggiebank pb,int num)
{
    pb.amount += num;
    cout << pb.amount ;
}
int main()
{
    piggiebank obj(10);
    obj.addamount(20);
    nonmember(obj,30);
}
