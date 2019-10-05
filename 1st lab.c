#include <stdio.h>
int addition(int A[][5],int B[][5],int sum[][5])
{
    int i,j,k,l,m;
    printf("A=\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        scanf("%d",&A[i][j]);
    }
    printf("B=\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        scanf("%d",&B[i][j]);
    }
    for (k=0;k<5;k++)
    {
        for(l=0;l<5;l++)
            sum[k][l]=A[k][l]+B[k][l];
    }
    return sum[k][l];

}
int multiplication(int A[][5],int B[][5],int m[][5])
{
    int s=0;
    int i,j,p,q,r;
    printf("A=\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        scanf("%d",&A[i][j]);
    }
    printf("B=\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        scanf("%d",&B[i][j]);
    }
    for(p=0;p<5;p++)
    {
        for(q=0;q<5;q++)
        {
            for(r=0;r<5;r++)
            s=s+A[p][r]*B[r][q];

            m[p][q]=s;
            s=0;
        }
    }
    return m[p][q];
}

int main ()
{
    int choice;
    int A[5][5],B[5][5];
    int sum[5][5],m[5][5];
    int i,j,k,l,p,q,r;
    printf("Enter Choice\n1 for Addition\n2 for Multiplication\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        {
        addition(A,B,sum);
        printf("Addition=\n");
        for (k=0;k<5;k++)
        {
        for(l=0;l<5;l++)
            printf("%d\t",sum[k][l]);

            printf("\n");
        }
            break;
        }
    case 2:
        {
        multiplication(A,B,m);
        printf("Multiplication=\n");
        for(p=0;p<5;p++)
        {
        for(q=0;q<5;q++)
        {
           printf("%d\t",m[p][q]);
        }
        printf("\n");
        }
            break;
        }
    default:
        printf("Enter Choice Between 1 & 2\n");
        break;
    }
}
