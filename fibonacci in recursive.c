#include<stdio.h>
int main()
{
    int n,i=0,a=0;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Fibonacci Series :");
    for(i=0;i<n;i++){
        printf("%d\t",fibonacci(a));
        a++;
    }
    return 0;
}

int fibonacci(int a)
{
    if(a==0){
        return 0;
    }
    else if(a==1)
        return 1;
    else
        return (fibonacci(a-1)+fibonacci(a-2));
}
