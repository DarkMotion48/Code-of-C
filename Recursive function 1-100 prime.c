#include<stdio.h>
  //int prime(int, int);
  int main(){
         int n,m=1;
         for(n=2;n<=100;n++)
         {
         m=prime(n, n/2);
         if(m==1)
         printf(" %d \n",n);
         }
         return 0;
         }

  int prime(int n, int j)
  {
         if(j == 1)
         return 1;
         else
         {
         if(n % j == 0)
         return 0;
         else
         prime(n, j-1);
         }
 }








