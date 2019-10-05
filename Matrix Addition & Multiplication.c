/**
@DarkMotion
*/
#include<stdio.h>
void addition (int a[][5],int b[][5]);
void multiplication(int a[][5],int b[][5]);

int main()
{
        int a[5][5],b[5][5],c[5][5];
        int i,j,k,l,m,n;
        printf("If you want to addition then press 1 or, you want to multiply then press 2:\n ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            {
            addition (a,b);
            break;
            }
            case 2:
                {
                multiplication(a,b);
                break;
                }
        }
}

void addition (int a[][5],int b[][5])
{
    int c[5][5];
    int i,j,k,l,m,sum=0;
    printf("Enter The value of A=\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter The value of B=\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
        scanf("%d",&b[i][j]);
    }
    printf("Ans:\n");
    for(k=0;k<5;k++){
        for(l=0;l<5;l++){
            for(m=0;m<5;m++){
                sum=a[k][m]+b[m][l];
            }
            c[k][l]=sum;
            sum=0;
        }
    }
    for(k=0;k<5;k++){
        for(l=0;l<5;l++){
                printf("%d\t",c[k][l]);
        }
        printf("\n");
    }
}

void multiplication(int a[][5],int b[][5])
{
    int c[5][5];
    int i,j,k,l,m,sum=0;
    printf("Enter The value of A=\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter The value of B=\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
        scanf("%d",&b[i][j]);
    }
    printf("Ans:\n");
    for(k=0;k<5;k++){
        for(l=0;l<5;l++){
            for(m=0;m<5;m++){
                sum=sum+a[k][m]*b[m][l];
            }
            c[k][l]=sum;
            sum=0;
        }
    }
    for(k=0;k<5;k++){
        for(l=0;l<5;l++){
                printf("%d\t",c[k][l]);
        }
        printf("\n");
    }
}
