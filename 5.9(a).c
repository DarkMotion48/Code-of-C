#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x= ");
    scanf("%d",&x);
    if(x==0){
        printf("y= 0\n");
    }
    else{
        if(x>0){
            printf("y= 1\n");
        }
        else{
            printf("y= -1\n");
        }
    }
    return 0;
}
