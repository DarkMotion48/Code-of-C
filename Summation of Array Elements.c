/*
@DarkMotion
*/
#include<stdio.h>
#include<string.h>

int main()
{
        int a[5],i,sum=0;
        int *p;
        printf("Enter the array elements: ");
        for(i=0;i<5;i++){
                scanf("%d",&a[i]);
        }
        p=a;
        for(i=0;i<5;i++){
            sum=sum + *p;
            p++;
        }
        printf("Sum: %d\n",sum);
}
