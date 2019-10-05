#include<stdio.h>
int main()
  {
   int i,n, first=0, second=1, sum;
   first=0;
   second=1;
   printf("Enter the number : ");
   scanf("%d",&n);
   printf("The series is : ");
   for(i=0; i<n; i++)
    {
    printf("%d ",first);
   sum = first + second;
    first = second;
    second = sum;
   }
   return 0;
}
