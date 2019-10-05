#include<stdio.h>
#include<string.h>
void upper(char[]);

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    upper(str);
    return 0;
}

void upper(char str[100])
{
    int i;
    printf("In Uppercase: ",str);
    for(i=0;str[i];i++)
    {
        if(str[i]>96 && str[i]<123)
            str[i]-=32;
    }
    printf("%s",str);
}

