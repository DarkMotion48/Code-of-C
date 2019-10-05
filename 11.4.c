#include<stdio.h>
int a[5][5],b[5][5],row,col;
void add(int(*)[5]);

int main()
{
    int c[5][5],i,j;
    printf("Enter row : ");
    scanf("%d",&row);
    printf("Enter column : ");
    scanf("%d",&col);
    printf("Enter matrix A :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);
       }
    printf("Enter matrix B :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            scanf("%d",&b[i][j]);
        }
        add(c);
        printf("Addition :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d\t",c[i][j]);

            printf("\n");
    }
        return 0;
}
void add(int c[5][5])
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            c[i][j]=a[i][j]+b[i][j];
        }
}

