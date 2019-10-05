#include<stdio.h>

int main()
{
    int n;
    printf("Enter the Array Size: ");
    scanf("%d",&n);
    int a[n+1],i,temp,k,ptr;
    printf("Enter the Array Elements: ");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    a[0]=-100;
    for(k=2;k<=n;k++){
        temp=a[k];
        ptr=k-1;
        while(temp<a[ptr]){
            a[ptr+1]=a[ptr];
            ptr=ptr-1;
        }
        a[ptr+1]=temp;
    }
    printf("Array in Ascending Order: ");
    for(i=1;i<=n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n\n");
    return 0;
}
