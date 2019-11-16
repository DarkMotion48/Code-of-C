/**
@DarkMotion
*/
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character=");
    scanf("%c",&a);
    if(a=='a' ||a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O'|| a=='U' ){
        printf("%c is vowel",a);
    }
    else{
        printf("%c is consonant",a);
    }
    return 0;
}
