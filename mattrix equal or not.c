#include<stdio.h>
int main()
{
    int a[3][3],b[3][3];
    int i,j,count=0;
    printf("Enter matrix A:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter matrix B:");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                if(a[i][j] == b[i][j]){
                    count = 0;
                }
                else{
                    count = count +1;
                }
        }
    }
    if(count==0){
        printf("Two matrix are Equal\n");
    }
    else{
        printf("Two matrix are not Equal\n");
    }
    return 0;
}
