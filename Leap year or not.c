/**
@DarkMotion
*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year=");
    scanf("%d",&a);
    if(a%4==0){
        if(a%400==0 && a%100==0){
            printf("%d is leap year",a);
        }
        else if(a%4==0 && a%100!=0){
            printf("%d is leap year",a);
        }
        else{
            printf("%d is not leap year",a);
        }
    }
    else{
            printf("%d is not leap year",a);
        }
    return 0;
}
