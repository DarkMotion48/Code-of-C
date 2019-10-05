#include<stdio.h>
#include<string.h>
int count_character(char ch[]);
char reve(char ch[]);

int main(void)
{
    char ch[1000];
    int count=0;
    gets(ch);
    count=count_character(ch);
    printf("Total Character:%d\n",count);
    char rev;
    rev=reve(ch);
    printf("%s",rev);
    return 0;

}

 int count_character(char ch[])
{
    int i,count=0;
    for(i=0;ch[i]!='\0';i++){
        if((ch[i]>='A'&& ch[i]<='Z') || (ch[i]>='a'&& ch[i]<='z')){
            count++;
        }
    }
    return count;
}

char reve(char ch[])
{
    int l=0,i=0;
    char temp;
    l=strlen(ch)-1;
    while(i<l)
    {
        temp=ch[i];
        ch[i]=ch[l];
        ch[l]=temp;
        i++;
        l--;
    }
    return ch;
}
