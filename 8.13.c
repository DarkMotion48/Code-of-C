#include<stdio.h>
#include<string.h>

int main()
{
    char Str1[50],Str2[50];
    int i,m,n,j;
    printf("Enter A String:\n");
    gets(Str1);
    printf("Enter Number of Characters Which you Want to Copy:\n");
    scanf("%d",&m);
    printf("Enter Beginning Index from Which you Want to Copy:\n");
    scanf("%d",&n);
    for(i=n-1,j=0;i<m+n;i++,j++)
    {
        Str2[j]=Str1[i];
    }
    Str2[m]='\0';
    printf("\nCopied String is: %s \n",Str2);
    return 0;
}
