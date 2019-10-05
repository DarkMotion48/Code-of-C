#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    y=(x!=0)?((x>0)?1:-1):0;
    printf("y=%d\n",y);
    return 0;
}
