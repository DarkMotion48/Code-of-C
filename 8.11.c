#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int n,l=0,l1=0,l2=0;
    printf("Enter first String: ");
    gets(a);
    printf("Enter Second String: ");
    gets(b);
    l1=strlen(a);
    l2=strlen(b);
    if(l2>l1)
        l=l2;
    else
        l=l1;
    n=strncmp(a,b,l);
    if(n<0){
        printf("First String is less than Second one.\n");
    }
    else if (n==0){
        printf("Two String is Equal.\n");
    }
    else{
        printf("First String is greater than Second one.\n");
    }
    return 0;
}
