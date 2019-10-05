#include<stdio.h>
int number(int n1)
{
    int i=2;
    while(i<=n1/2)
    {
         if(n1%i==0)
             return 0;
         else
             i++;
    }
    return 1;
}

int main()
{
    int n1,prime;
    printf(" Input a number : ");
    scanf("%d",&n1);
    prime = number(n1);
   if(prime==1)
        printf(" The number %d is a prime number.\n",n1);
   else
      printf(" The number %d is not a prime number.\n",n1);
   return 0;
}
