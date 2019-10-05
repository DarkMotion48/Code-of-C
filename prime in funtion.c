#include<stdio.h>
int prime(int n);

int prime(int n)
{
    int j;
        for(j=2; j<=n; j++)
        {
            if(n%j==0 && j!=n)
            {
               return 0;
                break;
            }
            else if(n==j)
                return 1;
        }
    }
int main()
{
    int a,b,m,i;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
      m=prime(i);
      if(m==1)
        printf("%d\t",i);
    }
    return 0;
}
