#include<stdio.h>

int MIN(int a[ ],int k,int n,int loc)
{
    loc=k;
    int min = a[loc];
    int i;
    for(i=k+1;i<=n;i++){
        if(min > a[i]){
            loc=i;
            min=a[i];
        }
    }
    return loc;
}


int main()
{
    int k,n,loc,temp;
    printf("Enter the Array Size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Array Elements: ");
    for(k=1;k<=n;k++){
        scanf("%d",&a[k]);
    }
    for( k=1 ; k<=n ; k++){
        loc=0;
        loc=MIN(a,k,n,loc);
        temp=a[k];
        a[k]=a[loc];
        a[loc]=temp;
    }
    printf("Array in Ascending Order: ");
    for( k=1 ; k<=n ; k++ ){
        printf("%d\t",a[k]);
    }
    printf("\n\n");
    return 0;
}

