#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number%3==0&&number%7==0)
    {
        printf("the number is divisible");
    }
    else{
        printf("the number is not divisible");
    }
}
