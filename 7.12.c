#include<stdio.h>
#include<string.h>

int main()
{
    char s[100],c;
    int l,i,count=0;
    printf("Enter a String: ");
    gets(s);
    printf("Enter the Character which you want to check: ");
    scanf("%c",&c);
    l=strlen(s);
    for(i=0;i<l;i++){
        if(s[i]== c){
            count=count+1;
        }
    }
    printf("In this String %c has %d time(s).\n",c,count);
    return 0;
}
