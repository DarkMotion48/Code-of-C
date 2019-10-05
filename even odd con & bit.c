#include<stdio.h>
int main()
{
    int x;
    printf("input the number");
    scanf("%d",&x);
    (x&1)? printf("odd"); printf("even");
}

