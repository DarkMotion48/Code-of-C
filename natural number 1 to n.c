#include <stdio.h>
int main()
{
    int i=1, n;
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d : \n", n);
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
