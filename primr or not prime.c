#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0&&i!=n)
        {
            printf("not prime");
            break;
        }
        else if(i==n){
            printf("prime");
        }
    }
    return 0;
}
