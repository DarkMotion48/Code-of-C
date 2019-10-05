#include<stdio.h>
int main()
{
    int x;
    printf("Enter the Number=");
    scanf("%d",&x);
    if(x/5 && x/11){
        printf("%d is divisible by 5&11",x);
    }
    else{
        printf("%d is not divisible by 5&11",x);
    }
    return 0;
}
