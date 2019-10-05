#include<stdio.h>
#include<string.h>

int main()
{
    int x[100];
    int *p,i,n,sum=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    p=x;
    for(i=0;i<n;i++){
        printf("x[%d]=",i);
        scanf("%d",x+i);
        printf("\n");
    }
    printf("Print the address of each value are as follows:\n");
    printf("Element\tValue\tAddress\n\n");
    for(p=&x[0],i=0;p,&x[n];p++,i++){
        printf("x[%d]\t%d\t%u",i,*p,&x[i]);
        sum=sum + *p;
    }
    printf("%d\n",sum);
}
