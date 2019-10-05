#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    num(a);
    return 0;
}

void num (int x)
{
    if(x%2==0){
        printf("%d is Even\n",x);
    }
    else{
        printf("%d is Odd\n",x);
    }
}
