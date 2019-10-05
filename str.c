#include <stdio.h>
#include<string.h>

#define SIZE 1000
void char_count(char str[])
{
    int i, alphabets,digits,others;
    alphabets=digits=others=0;
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            others++;
        }

        i++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);
}

void rev_str(char str[])
{
    int n,i;
    n=strlen(str);
    printf("\nReversed string is \n");
    for(i=n-1;i>=0;i--)
    {
       printf("%c",str[i]);
    }
}

int main()
{
    char str[SIZE];
    printf("Enter your sentence:\t");
    gets(str);
    printf("The results of counting characters are as follows:\n");
    char_count(str);
    printf("Resultant reverse of the sentence is as follows:\n");
    rev_str(str);
}
