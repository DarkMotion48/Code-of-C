#include<stdio.h>
int reverse(int *p,int *a);

int main()
{
    int a[100],i,n,c;
    printf("Enter Array Elements Number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",a[i]);
    }
    c=reverse(n,a[i]);
    printf("%d",c);
    return 0;
}

int reverse(int *p,int *a)
{
    int j,i;
    for(j= *p;j> *a;j--){
        return *a;
    }
}
