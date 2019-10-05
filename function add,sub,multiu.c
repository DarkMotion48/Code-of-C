#include<stdio.h>
int sum(int a,int b,int c);
int sum(int a,int b,int c)
{
    int sum;
    sum=a+b+c;
    return sum;
}
int sub(int a,int b,int c);
int sub(int a,int b,int c)
{
    int sub;
    sub=a-b-c;
    return sub;
}
int multi(int a,int b,int c);
int multi(int a,int b,int c)
{
    int multi;
    multi=a*b*c;
    return multi;
}
int main()
{

int a,b,c,result1=0,result2=0,result3=0;
scanf("%d %d %d",&a,&b,&c);
 result1=(a+b+c);
 result2=(a-b-c);
 result3=(a*b*c);

 printf("Sum=%d\n",result1);
 printf("Sub=%d\n",result2);
 printf("Multi=%d\n",result3);

}

