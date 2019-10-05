#include <stdio.h>
int main()
{
    char c[100];
    int i;
    printf("Enter your name: ");
    gets(c);
    printf("Character\tASCII value\n");
    for(i=0;c[i]!='\0';i++){
        printf("%c\t\t%d\n",c[i],c[i]);
    }
    return 0;
}
