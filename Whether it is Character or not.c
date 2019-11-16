/**
@DarkMotion
*/
#include<stdio.h>
int main()
{
    char a;
    printf("enter a character = ");
    scanf("%c",&a);
    if (a>='a' && a<='z'){
        printf("%c is character \n",a);
    }
    else if (a>='A' && a<='z'){
         printf("%c is character \n",a);
    }
    else {
         printf("%c is not character \n",a);
    }
    return 0;
}
