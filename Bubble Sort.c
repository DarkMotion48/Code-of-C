#include<stdio.h>
int main()
{
    int n, data[100],k,ptr,temp;
    printf("Enter the Number of data Elements: ");
    scanf("%d",&n);
    printf("Enter the data Elements:");
    for(k=0;k<n;k++){
        scanf("%d",&data[k]);
    }
    for(k=0;k<n-1;k++){
        ptr=0;
        while(ptr < n-k-1){
            if( data[ptr] > data[ptr+1]){
                temp = data[ptr];
                data[ptr] = data[ptr+1];
                data[ptr+1] = temp;
            }
            ptr = ptr+1;
        }
    }
    for(k=0;k<n;k++){
        printf("%d\t",data[k]);
    }
    return 0;
}
