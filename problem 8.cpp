/**

author:	©LoneWolfDON

**/
#include<bits/stdc++.h>
using namespace std;

string depositor ="Imran";

class bankaccount
{
public:
    string depositor;
    double balance;
    int transactions;
    void show()
    {
        cout<<"Account Holder Name: "<<depositor<<endl;
        cout <<"Balance : "<<balance<<endl;
        cout<< "Number of Transactions : "<<transactions<<endl;
        if(depositor.compare(::depositor)==0)
        cout<<"Name of Depositor : "<<::depositor<<endl;
    }
};

int main()
{
    bankaccount accountholder;
    cin>>accountholder.depositor>>accountholder.balance>>accountholder.transactions;

    accountholder.show();
}
