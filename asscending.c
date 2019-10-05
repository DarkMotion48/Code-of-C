#include<stdio.h>
#include<string.h>
int main()
{
    int n,a[100],i,j,temp=0;
    printf("How many numbers you want to Ascending:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++){
         for(j=0;j<n;j++){
            if(a[j]>a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
         }
     }
     printf("Ascending Order:");
     for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
