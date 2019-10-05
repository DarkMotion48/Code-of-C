#include<stdio.h>
int main()
{
    int first=1,second=1,sum=0,count=0,m;
    printf("Enter the value of m: ");
    scanf("%d",&m);
    printf("Fibonacci numbers: ");
    do{
        printf("%d\t",first);
        sum=first+second;
        first=second;
        second=sum;
        count++;
    }while(m!=count);
    return 0;
}
