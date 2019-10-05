#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=n;n!=0;n=n/10){
        j=n%10;
        sum=sum*10+j;
    }
    if(i==sum){
        printf("%d is a palindrome number\n",i);
    }
    else
        printf("%d is not a palindrome number\n",i);

    return 0;
}
