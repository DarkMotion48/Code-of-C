#include<stdio.h>
int main()
{
    int n,a,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>=10){
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    sum=sum+n;
    printf("Sum of the digits: %d\n",sum);
    return 0;
}

