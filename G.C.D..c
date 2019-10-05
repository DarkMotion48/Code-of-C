/**
@DarkMotion
*/
#include<stdio.h>
int gcd(a,b);

int main()
{
    int a,b,g;
    printf("Enter two Numbers:");
    scanf("%d%d",&a,&b);
    g=gcd(a,b);
    printf("G.C.D. of %d & %d is = %d\n",a,b,g);
    return 0;
}

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
