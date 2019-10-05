#include <stdio.h>
int main()
{
    int i, j,st,sp;
    sp = 5-1;
    st= 1;
    for(i=1; i<5*2; i++)
    {
        for(j=1; j<=sp; j++)
            printf(" ");
        for(j=1; j<=st; j++)
            printf("*");
        printf("\n");
        if(i < 5)
        {
            st++;
            sp--;
        }
        else
        {
            st--;
            sp++;
        }
    }
    return 0;
}
