#include <stdio.h>
int main()
{
    int a, b, i, p;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Prime numbers between %d and %d are:",a,b);
    while (a < b)
    {
        p = 0;
        for(i = 2; i <= a/2; ++i)
        {
            if(a % i == 0)
            {
                p = 1;
                break;
            }
        }
        if (p == 0)
            printf("%d\t", a);

        ++a;
    }
    printf("\n");
    return 0;
}
