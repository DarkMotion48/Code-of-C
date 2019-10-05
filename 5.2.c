#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("Number which is divisible by 7: ");
    for(i=100;i<=200;i++){
        if(i%7==0){
            printf("%d\t",i);
            sum=sum+i;
        }
    }
    printf("\nSum is: %d\n",sum);
    return 0;
}
