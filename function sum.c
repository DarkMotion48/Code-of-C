#include<stdio.h>
int main()
{
    int a,b,sum,minus;
    printf("enter the numbers:\n");
    scanf("%d %d",&a,&b);
    sum=add(a,b);
    printf("the addition is%d\n",sum);
    minus=sub();
    printf("the substraction is%d\n",minus);
    mul(a,b);
    div();
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

int sub()
{
    int a,b,c;
    printf("enter the numbers:\n");
    scanf("%d %d",&a, &b);
    c=a-b;
    return c;
}
void mul(int a, int b)
{
    int c;
    c=a*b;
    printf("the multiplication is%d\n",c);

}
void div()

{
    int a,b,c;
    printf("enter the numbers");
    scanf("%d %d",&a, &b);
    c=a/b;
    printf("the division is%d\n",c);

}

