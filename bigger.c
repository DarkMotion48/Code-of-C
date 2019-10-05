#include<stdio.h>
int bigger(int *p,int *q);

int main()
{
    int a,b,c=0;
    printf("Enter two integer number:");
    scanf("%d%d",&a,&b);
    c=bigger(&a,&b);
    printf("Biggest number is: %d\n",c);
    return 0;
}

int bigger(int *p,int *q)
{
    if(*p > *q){
        return *p;
    }
    else{
        return *q;
    }
}
