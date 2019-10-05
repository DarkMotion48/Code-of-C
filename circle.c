#include<stdio.h>
double diameter(double x);
double area(double p);
int main()
{
    double a,d,c,b;
    scanf("%lf",&a);
    d= diameter(a);
    printf("Diameter is : %.2lf\n",d);
    c= circumference(a);
    b= area(a);
    printf("Area is : %.2lf\n",b);
    return 0;
}

double diameter(double x)
{
    double dia=0;
    dia=2*x;
    return dia;
}

void circumference(double r)
{
    double cir,pie;
    pie=3.1416;
    cir= 2*pie*r;
    printf("Circumference is : %.2lf\n",cir);
}

double area(double p)
{
    double areaa, pie;
    pie=3.1416;
    areaa = pie*p*p;
    return areaa;
}
