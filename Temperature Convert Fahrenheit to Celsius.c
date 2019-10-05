#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the Temperature in Fahrenheit:");
    scanf("%f",&f);
    c=(5*(f-32))/9;
    printf("Temperature in Celsius: %.2f\n",c);
    return 0;
}
