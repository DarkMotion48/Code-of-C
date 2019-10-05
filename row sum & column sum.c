#include<stdio.h>
int main()
{
    int a[3][4];
    int i,j,l,sum=0,row1=0,row2=0,row3=0,col1=0,col2=0,col3=0,col4=0;
    printf("Enter matrix A:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<1;i++){
        for(l=0;l<4;l++)
            {
            sum=sum+a[i][l];
        }
         row1=sum;
            sum=0;
    }
    for(i=1;i<2;i++){
        for(l=0;l<4;l++){
            sum=sum+a[i][l];
        }
        row2=sum;
            sum=0;
    }
    for(i=2;i<3;i++){
        for(l=0;l<4;l++){
            sum=sum+a[i][l];
        }
        row3=sum;
            sum=0;
    }
    printf("row sum = %d\t %d\t %d\n",row1,row2,row3);
    for(i=0;i<3;i++){
        for(l=0;l<1;l++)
            {
            sum=sum+a[i][l];
        }
    }
    col1=sum;
            sum=0;
    for(i=0;i<3;i++){
        for(l=1;l<2;l++){
            sum=sum+a[i][l];
        }
    }
    col2=sum;
            sum=0;
    for(i=0;i<3;i++){
        for(l=2;l<3;l++){
            sum=sum+a[i][l];
        }
    }
    col3=sum;
            sum=0;
    for(i=0;i<3;i++){
        for(l=3;l<4;l++){
            sum=sum+a[i][l];
        }
    }
    col4=sum;
            sum=0;
    printf("Column sum = %d\t %d\t %d\t %d\n",col1,col2,col3,col4);
}
