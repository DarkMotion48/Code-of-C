#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3],c[3][1];

    printf("Matrix A : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");

    }

    printf("Matrix B : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("The new matrix C : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<1;j++)
        {
          c[i][j]=a[i][2]+b[i][3];
          printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;



}
