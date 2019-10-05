#include<stdio.h>
int main()
{
    int a[4],i,position,n;
    printf("Enter the search number :");
    scanf("%d",&n);
    printf("Enter all numbers :\n");
    for(i=0;i<4;i++)
      {
        scanf("%d",&a[i]);
      }
      for(i=0;i<4;i++)
      {
          if(a[i]==n)
          {
              position=i+1;
            printf("Position %d",position);
          }
      }

 return 0;

}
