#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int b;
    printf("Enter a character string: ");
    gets(a);
    b=strlen(a);
    printf("Length of the given character string: %d\n",b);
    return 0;
}
