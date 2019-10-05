#include <stdio.h>
int main()
{
    int i,j,k=0,count=0,count1=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf("  \t");
            count++;
        }
        while(k!=2*i-1)
        {
            if(count<=3)
            {
                printf("%d\t",i+k);
                count++;
            }
            else
            {
                count1++;
                printf("%d\t",(i+k-2*count1));
            }
            k++;
        }
        count1=count=k=0;
        printf("\n");
    }
    return 0;
}
