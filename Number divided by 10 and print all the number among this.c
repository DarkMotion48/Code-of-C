#include<stdio.h>
int main()
{
    int i,a;
    printf("Enter number=");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
            if(i==1){
                printf("%d\n",a);
            }
            a=a/10;{
        printf("%d\n",a);
            }
    }
    return 0;
}
