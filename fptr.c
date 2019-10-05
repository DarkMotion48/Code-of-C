#include<stdio.h>
#include<math.h>
#define PI 3.1415926

double y(double);
double cos(double);
double table(double(*f)(), double, double, double);

int main()
{
    printf("Table of Y(x) = 2x^2 - x +1\n\n");
    table(y,0.0,2.0,0.5);
    printf("\n");
    printf("\Table of cos(x)\n\n");
    table(cos,0.0,PI,0.5);
}

double table(double (*f)(), double min, double max, double step)
{
    double a, value;
    for(a=min;a<=max;a+=step)
    {
        value=(*f)(a);
        printf("%5.2f\t%10.4f\n",a,value);
    }
}
double y(double x)
{
    return(2*x*x -x+1);
}
