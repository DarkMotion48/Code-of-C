#include <stdio.h>
int main()
{
    int num,count=0;
    printf("Enter any number: ");
    scanf("%lld", &num);
    while(num != 0)
    {
        count++;
        num /= 10;
    }
    printf("Total digits: %d", count);
    return 0;
}
