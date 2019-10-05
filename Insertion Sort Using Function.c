#include<stdio.h>
void Insertion_Sort(int array[ ],int n);

void main()
{
    int array[100],n,i;
    printf("Enter the Number of Elements: ");
    scanf("%d",&n);
    printf("Enter Array Elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    Insertion_Sort(array,n);
    printf("Enter the Ascending Sorted Array: ");
    for(i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
}

void Insertion_Sort(int array[ ],int n)
{
    int k,ptr,temp;
    for(k = 1; k < n; k++){
        temp = array[k];
        ptr = k - 1;
        while( ptr >= 0 && array[ptr] > temp ){
            array[ptr + 1] = array[ptr];
            ptr = ptr-1;
        }
        array[ptr+1] = temp;
    }
}
