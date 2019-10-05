#include<stdio.h>
#include<string.h>

int main()
{
    int i,count=0;
    char a[100];
    char b;
    gets(a);
    scanf("%c",&b);
    for(i=0;a[i]!='\0';i++){
        if(b==a[i])
            count++;
    }
    printf("Frequency: %d\n",count);
}
