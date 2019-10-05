#include <stdio.h>
int main()
{
    int i, j, st, sp;
    st= 1;
    sp =5 - 1;
    for(i=1; i<5*2; i++)
    {
        for(j=1; j<=sp; j++)
            printf(" ");
        for(j=1; j<st*2; j++)
            printf("*");
        printf("\n");
        if(i<5)
        {
            sp--;
            st++;
        }
        else
        {
            sp++;
            st--;
        }
    }
    return 0;
}
