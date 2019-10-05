#include<stdio.h>
int main()
{
    int i,j,k,l=1,m=5;
    for(i=1;i<=5;i++){
        for(j=1;j<=m;j++)
            printf(" ");
        for(k=1;k<=l;k++)
            printf("*");
        m--;
        l+=2;
        printf("\n");
    }
    }

