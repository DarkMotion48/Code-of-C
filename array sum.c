#include<stdio.h>
int main()
{
    int a[8],i,sum=0;
    for(i=0;i<8;i++){
        scanf("%d",&a[i]);
      sum=sum+a[i];
    }
    printf("the total sum = %d",sum);
 return 0;

}
