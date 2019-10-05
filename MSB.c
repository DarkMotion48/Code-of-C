#include <stdio.h>
int main()
{
    int num, msb,BITS=8;

    printf("Enter any number: ");
    scanf("%d", &num);
    msb = 1 << (BITS - 1);
    if(num & msb)
        printf("MSB of %d is set (1).", num);
    else
        printf("MSB of %d is unset (0).", num);

    return 0;
}
