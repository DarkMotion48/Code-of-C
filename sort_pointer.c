#include<stdio.h>
int sort(int , int *);

int main()
{
    int i,*ptr,n;
    printf("Enter the size of array = ");
    scanf("%d",&n);
    int value[n];
    for (i=0;i<n;i++)
    {
        printf("Value[%d] = ",i);
        scanf("%d",&value[i]);
    }
    ptr=value;
    dessort(n,ptr);
    printf("\nDescending Sorting:\n");
    for (i=0;i<n;i++)
    {
        printf("Value[%d] = %d ",i,value[i]);
        printf("\n");
    }
    ascsort(n,ptr);
    printf("\nAscending Sorting:\n");
    for (i=0;i<n;i++)
    {
        printf("Value[%d] = %d ",i,value[i]);
        printf("\n");
    }
}

int dessort(int size, int *p)
{
    int i,j,temp;
    for (i=0;i<size;i++)
    {
        for (j=0;j<size;j++)
        if (*(p+j-1)<*(p+j))
        {
            temp=*(p+j-1);
            *(p+j-1)=*(p+j);
            *(p+j)=temp;
        }
    }
}

int ascsort(int size, int *p)
{
    int i,j,temp;
    for (i=0;i<size;i++)
    {
        for (j=0;j<size;j++)
        if (*(p+j-1)>*(p+j))
        {
            temp=*(p+j-1);
            *(p+j-1)=*(p+j);
            *(p+j)=temp;
        }
    }
}
