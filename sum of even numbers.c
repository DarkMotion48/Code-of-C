#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n =");
    scanf("%d",&n);
    i=1;
    do{
        if(i%2==0){
            sum=sum+i;
        }
        else{
            sum=sum;
        }
        i++;
    }while(i<=n);
        printf("Total of even number= %d",sum);
    return 0;
}
