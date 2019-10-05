#include<stdio.h>
int main()
{
    double a,b,c,sum,average;
    scanf("%lf %lf %lf",&a,&b,&c);
    sum=a+b+c;
    average=sum/3;
    printf("the number is %0.2lf",average);
    return 0;
}

