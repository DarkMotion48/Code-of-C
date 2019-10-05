#include<stdio.h>
int main()
{
    char a;
    printf("Input any Alphabet=");
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        printf("%c is lowercase Alphabet",a);
    }
    else{
        printf("%c is uppercase Alphabet",a);
    }
    return 0;
}

