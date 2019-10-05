#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,s=0,A=0;
    printf("Enter sides value of triangle:");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle: %.2f",A);
    return 0;
}
