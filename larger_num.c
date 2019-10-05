#include<stdio.h>
int large(int *,int *);

int main()
{
    int x, y;
    int *p;
    printf("X= ");
    scanf("%d",&x);
    printf("\nY= ");
    scanf("%d",&y);
    p=large(&x,&y);
    printf("Resultant larger number is %d",*p);
}
large(int *a,int *b)
{
    if (*a>*b)
        return(a);
    else
        return(b);
}
