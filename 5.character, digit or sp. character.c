#include<stdio.h>
int main()
{
    double a;
    printf("Enter a character=");
    scanf("%lf",&a);
    if(a>='a' && a<='z' || a>='A' && a<='Z'){
        printf("%lf is a character",a);
    }
    else if(a>=0 && a<=9){
        printf("%lf is a digit",a);
    }
    else{
        printf("%lf is special character",a);
    }
    return 0;
}
