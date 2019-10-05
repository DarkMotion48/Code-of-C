#include<stdio.h>
int main()
{
    int a;
    printf("Input month number=");
    scanf("%d",&a);
    if(a==2){
        printf("The days of month number %d is 28 days. If the year is leap year than it is 29 days",a);
    }
    else if(a==4 ||a==6|| a==9 || a==11){
        printf("The days of month number %d is 30 days",a);
    }
    else {
        printf("The days of month number %d is 31 days",a);
    }
    return 0;
}
