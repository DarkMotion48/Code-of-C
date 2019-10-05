
#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a>b && a>c && a>d){
        printf("maximum is %d",a);
    }
    else if(b>a && b>c && b>d){
        printf("maximum is %d",b);
    }
     else if(c>a && c>b && c>d){
        printf("maximum is %d",c);
    }
    else{
        printf("the number is maximum ");
    }
    return 0;
}
