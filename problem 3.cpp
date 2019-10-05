/**

author:	©LoneWolfDON

**/
#include<bits/stdc++.h>
using namespace std;

class building
{
public:
    int floor, room, area;
    void getvalueb(int f, int r, int a)
    {
        floor=f;
        room=r;
        area=a;
    }
};

class house : public virtual building
{

};

class flat : public house, public virtual building
{
public:
    int numwindow, numdoor;
    void getvaluef(int nw, int nd)
    {
        numwindow= nw;
        numdoor= nd;
    }
    void showinfo()
    {
        cout<<"Info of a flat : "<<endl;
        cout<<" Area : "<<area/2<<endl;
        cout<<" Room : "<<room/(floor*2)<<endl;
        cout<<" Window: "<<numwindow/(floor*2)<<endl;
        cout<<" Door : "<<numdoor/(floor*2)<<endl;
    }
};

int main()
{
    flat f1;
    f1.getvalueb(8,64,3200);
    f1.getvaluef(128,80);
    f1.showinfo();
}
