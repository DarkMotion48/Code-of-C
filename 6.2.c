#include<stdio.h>
int main()
{
    int i,m,sum=1;
    printf("Enter the value of m: ");
    scanf("%d",&m);
    for(i=1;i<=m;i++){
        sum=sum*i;
    }
    printf("%d\n",sum);
    return 0;
}
