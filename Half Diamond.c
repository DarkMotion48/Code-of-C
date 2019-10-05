/**
@DarkMotion
*/
#include<stdio.h>
int main()
{
    int i, j, col;
    col=1;
    for(i=1;i<5*2;i++)
    {
        for(j=1; j<=col; j++)
        {
            printf("*");
        }
        if(i < 5)
        {
            col++;
        }
        else
        {
            col--;
        }
        printf("\n");
    }
    return 0;
}
