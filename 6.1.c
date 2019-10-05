#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Reverse number is: ");
    while(n>=10){
        a=n%10;
        printf("%d",a);
        n=n/10;
    }
    printf("%d\n",n);
    return 0;
}
