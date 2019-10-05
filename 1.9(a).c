#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the Temperature in Celsius:");
    scanf("%f",&c);
    f=((9*c)/5 )+32;
    printf("Temperature in Fahrenheit: %.2f\n",f);
    return 0;
}
