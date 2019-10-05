#include<stdio.h>
#include<string.h>

int main()
{
    int l=0,i=0;
    char temp,ch[1000];
    gets(ch);
    l=strlen(ch)-1;
    while(i<l)
    {
        temp=ch[i];
        ch[i]=ch[l];
        ch[l]=temp;
        i++;
        l--;
    }
    printf("%s",ch);

}
