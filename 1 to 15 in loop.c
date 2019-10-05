#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
        {
            k=5-1;
            l=i;
            for(j=1;j<=i;j++)
            {
                printf("%d\t",l);
                l+=k;
                k--;
            }
        printf("\n",i);
    }
    return 0;
}
