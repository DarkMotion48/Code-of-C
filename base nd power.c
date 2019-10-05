#include<stdio.h>
int main()
{
    int base,power,product,current=1;
    printf("Enter the base number: ");
    scanf("%d",&base);
    printf("Enter the power value: ");
    scanf("%d",&power);
    product=base;
    while(current<power)
    {
        product=product*base;
        current++;
    }
    printf("%d power %d is %d\n",base,power,product);
    return 0;
}
