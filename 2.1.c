#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    float sum=0,div=0,i;
    for(i=1;i<=n;i++){
        div=1/i;
        printf("%f\n",div);
        sum=sum+div;
    }
    printf("Sum of these Series: %.2f\n",sum);
    return 0;
}
