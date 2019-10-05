#include<stdio.h>
int sumofnaturenumbers(int a,int b);

int main()
{
    int a,b,sum=0;
    printf("Enter two Numbers:");
    scanf("%d%d",&a,&b);
    sum= sumofnaturenumbers(a,b);
    printf("Sum of Natural Numbers between %d & %d is: %d\n",a,b,sum);
    return 0;
}

int sumofnaturenumbers(int a,int b)
{
    if(a==b)
        return a;
    else
        return a+sumofnaturenumbers(a+1,b);
}
