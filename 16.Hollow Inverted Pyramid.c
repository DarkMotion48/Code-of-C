#include<stdio.h>
int main()
{
    int i, j, k;
    for(i = 5; i >= 1; i--)
    {
        for(k = i; k < 5; k++)
        {
            printf(" ");
        }
        for(j = 1; j <= (2*i-1); j++)
        {
            if(i == 5 || j == 1 || j == (2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
