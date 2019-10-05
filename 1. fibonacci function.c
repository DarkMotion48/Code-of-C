#include<stdio.h>
void fibonacci(int n);

int main()
{
    int n;
    printf("Enter Numbers:");
    scanf("%d",&n);
    printf("Fibonacci Series is:");
    fibonacci(n);
    return 0;
}

void fibonacci(int n)
{
    int i,first=0,second=1,sum;
    for(i=0;i<n;i++){
        printf(" %d ",first);
        sum=first + second;
        first= second;
        second=sum;
    }
}
