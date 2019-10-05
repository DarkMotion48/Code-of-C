#include<stdio.h>
int fact(int a);

int main()
{
    int a,fac=0;
    printf("Enter a number:");
    scanf("%d",&a);
    fac=fact(a);
    printf("Factorial of %d is = %d\n",a,fac);
    return 0;
}

int fact(int a)
{
    if(a==1){
        return a;
    }
    else{
        return a*fact(a-1);
    }
}
