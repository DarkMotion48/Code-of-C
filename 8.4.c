#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    int i=0,j=0,count=0;
    printf("Enter Any String: ");
    gets(a);
    printf("Enter the Particular Word: ");
    gets(b);
    while(a[i]!='\0'){
        while(a[i]!=' ' && a[i]!='\0')
            c[j++]=a[i++];
        c[j]='\0';
        j=0;
        if((strcmpi(b,c))==0)
            count++;
        if(a[i]=='\0')
            break;
        else
            i++;
    }
    printf("Number of Occurrences: %d",count);
    return 0;
}
