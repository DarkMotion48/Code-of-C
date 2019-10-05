#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>0;j--)
        {
            printf(" ");
        }
        if(i==1 || i==5)
            for(j=1;j<=5;j++)
            {
                printf("*");
            }
        else{
                for(j=1;j<=5;j++)
                {
                    if(j==1 || j==5)
                        printf("*");
                    else
                        printf(" ");
                }
            }
    printf("\n");
    }
    return 0;
}

