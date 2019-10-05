#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter the number of nomenclature:");
    scanf("%d",&a);
    for(i=0;i<=10;i++){
        b=a+i;
        printf("%d + %d = %d\n",a,i,b);
    }
    return 0;
}
