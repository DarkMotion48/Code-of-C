#include <stdio.h>
int main()
{
    int i, start, end;
    printf("Enter start value: ");
    scanf("%d", &start);
    printf("Enter end value: ");
    scanf("%d", &end);
    printf("Natural numbers from %d to %d : \n", start, end);
    i=start;
    while(i<=end)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
