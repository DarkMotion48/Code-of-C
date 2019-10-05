#include<stdio.h>
int main()
{
    int n;
    printf("Enter any year:");
    scanf("%d",&n);
    if(n%4==0){
        if(n%400==0 && n%100==0)
        {
            printf("it is a leap year");
        }
        else if(n%4==0 && n%100!=0){
            printf("it is a leap year");
        }
        else{
            printf("it is not a leap year");
        }
    }
    else{
        printf("it is not a leap year");
    }
    return 0;

}
