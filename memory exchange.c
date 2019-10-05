#include<stdio.h>
int change(int *p,int *q);

int main()
{
    int a,b;
    a=10;
    b=20;
    change(&a,&b);
    printf("A=%d\nB=%d\n",a,b);
}

int change(int *p,int *q)
{
    int temp=0;
    temp=*p;
    *p=*q;
    *q=temp;
    return p,q;
}
