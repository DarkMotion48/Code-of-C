#include<stdio.h>
int main()
{
    int f,l,sum=0,a;
    printf("Give a integer number \n");
    scanf("%d",&a);
    l=a%10;
    printf("The last number is %d\n",l);
    f=a;
    while(a>=10)
    {
        a=a/10;
    }
    f=a;
    printf("The first number is %d\n",f);
    sum=l+f;
    printf("Total = %d",sum);
    return 0;
}
