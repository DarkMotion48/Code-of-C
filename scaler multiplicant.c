#include<stdio.h>
int main()
{
    int a[3][3],b[3][3];
    int i,j,n;
    printf("Enter matrix A:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the multiplicand:");
    scanf("%d",&n);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            b[i][j]=a[i][j]*n;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
