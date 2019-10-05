#include<stdio.h>
#include<math.h>
int fibo(int n);

int main()
{
    int n,i=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    i=fibo(n);
    printf("Fibonacci Number for %d is: %d\n",n,i);
    return 0;
}

int fibo(int n)
{
    int a;
    if(n==1 || n==2)
        return 1;
    else{
        return (fibo(n-1)+fibo(n-2));
    }
}
