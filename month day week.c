#include<stdio.h>
int main()
{
    int days,month;
    printf("input month:");
    scanf("%d", &days);
    days=days-(month*30);
    //month=(days/30);
    printf("month:%d\n",month);
    printf("days:%d\n",days);
}


