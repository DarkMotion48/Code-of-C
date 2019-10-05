#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,k,l,m,sum=0;
    printf("Enter The value of A=\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter The value of B=\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        scanf("%d",&b[i][j]);
    }
    printf("Ans:\n");
    for(k=0;k<3;k++){
        for(l=0;l<3;l++){
            for(m=0;m<3;m++){
                sum=sum+a[k][m]*b[m][l];
            }
            c[k][l]=sum;
            sum=0;
        }
    }
    for(k=0;k<3;k++){
        for(l=0;l<3;l++){
                printf("%d\t",c[k][l]);
        }
        printf("\n");
    }
    return 0;
}
