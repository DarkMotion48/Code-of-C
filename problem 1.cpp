///1. Create two classes DM and DB which stores the value of distances. DM stores distances in meter and DB in kilometer.
///Write a C++ program that can
///i. Read values for each class objects
///ii. Add one object of DM with another object of DB
///iii. Print the result in meter or kilometer

#include<bits/stdc++.h>
using namespace std;

class DM
{
public:
    int meter;
    void setdistance(int m)
    {
        meter=m;
    }
};

class DB
{
public:
    int kilometer;
    void setdistance(int k)
    {
        kilometer=k;
    }
};

class add : public DM ,public DB
{
public:
    int addition;
    friend add operator+ ( DM& , DB& );

};
add operator+ (const DM& m,const DB& k)
{
    add sum;
    sum.addition = m.meter + k.kilometer*1000 ;
    return sum;
}
int main()
{
    int m,b,summation;
    DM objm;
    DB objb;
    add obj;

    cin >> m;
    cin >> b;
    objm.setdistance(m);
    objb.setdistance(b);

    obj = objm + objb;

    summation=obj.addition;
    cout << "Distance in Meter: " << summation  << endl;

    return 0;
}
