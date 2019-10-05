#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter the size of the matrix: ");
    scanf("%d%d",&m,&n);
    int a[m][n],b[n][m];
    printf("Enter the matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of this matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
