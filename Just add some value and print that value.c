#include<stdio.h>
int main()
{
    int a=20,b;
    int *c;
    float d=12.5,*e;
    c=&a;
    e=&d;
    printf("a=%d, *c=%d, d=%.2f, *e=%.2f ",a,*c,d,*e);
    b=*c;
    printf("b=%d",b);
}
