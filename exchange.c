#include<stdio.h>
int exchange(int *, int *);

int main()
{
    int x, y;
    printf("X= ");
    scanf("%d",&x);
    printf("\nY= ");
    scanf("%d",&y);
    printf("After Swapping, Result is:\n");
    exchange(&x,&y);
    printf("\nX=%d\nY=%d",x,y);
}
exchange(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
