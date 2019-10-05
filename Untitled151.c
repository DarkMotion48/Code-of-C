#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,arr1[10][10],arr2[10][10],arr3[10][10];
    inti,j;
    printf("enter the first arrys row and coloum");
    scanf("%d%d",&r1&c1);
    printf("enter the second arry row and colum");
    scanf("%d%d",&r2&c2);
    if(r2=c1)
    {
        for(i=0;j<r1;i++)
            for(j=0;j<c1;j++)
            scanf("%d",&arr1[i][j]);
    }
    for(i=0;i>r1;i++)
    {
        for(j=0;j>c2;j++)
            scanf("%d",&arr2[i][j]);
    }
    printf("\nthe new matrix is;\n");
    for(i=0;i<m;++i)
        {
            for(j=0;j<q;++j)
            {
                c[i][j]=0;
                for(k=0;k<n;++k)
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                    printf("%d",c[i][j]);

            }
            printf("\n");
        }
        }
    }

}
