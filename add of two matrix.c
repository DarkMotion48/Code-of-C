#include<stdio.h>
int add(int a[][3],int b[][3]);

int main()
{
    int a[3][3],b[3][3];
    int *c;
    int i,j,k,l;
    printf("Enter the value of A:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",a[i][j]);
        }
    }
    printf("Enter the value of B:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",b[i][j]);
        }
    }
    c=add( &a,&b);
    for(k=0;k<3;k++){
        for(l=0;l<3;l++){
                printf("%d\t",c);
        }
        printf("\n");
    }
    return 0;
}

int *add(int *p,int *q)
{
    int i,j,k,l,m,sum=0;
    int c[3][3];

    for(k=0;k<3;k++){
        for(l=0;l<3;l++){
            for(m=0;m<3;m++){
                sum=sum+ *p[k][m]+ *q[m][l];
            }
            c[k][l]=sum;
            sum=0;
        }
    }
    b= c[k][l];
    return b;
}
