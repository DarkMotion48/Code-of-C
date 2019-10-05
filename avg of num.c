#include<stdio.h>
int main()
{
    int n,i,a[100],sum=0;
    float avg=0;
    printf("Enter how many numbers you want to average: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++){
        sum = sum + a[i];
    }
    avg= sum / n;
    printf("Average is :%.2f\n",avg);
    return 0;
}
