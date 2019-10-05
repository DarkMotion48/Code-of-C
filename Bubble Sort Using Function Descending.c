#include<stdio.h>

void Bubble_Sort(int array[ ],int n)
{
    int k,ptr,temp;
    for(k=0;k<n-1;k++){
        ptr=0;
        while(ptr < n-k-1){
            if( array[ptr] < array[ptr+1]){
                temp = array[ptr];
                array[ptr] = array[ptr+1];
                array[ptr+1] = temp;
            }
            ptr = ptr+1;
        }
    }
}

void main()
{
    int n,i;
    printf("Enter the Number of Elements: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter Array Elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    Bubble_Sort(array,n);
    printf("Descending Sorted Array: ");
    for(i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
    printf("\n\n");
}

